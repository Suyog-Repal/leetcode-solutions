class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int> freq; 
        for(char x: s) freq[x]++; 
        int diff = 0; 
        // case 1 : maxi even min odd
        //int maxi = 0, mini = 1e7; 
    /*    for(auto &p :freq){
            if(p.second%2 == 0 && maxi < p.second){
                maxi = p.second; 
            }
            if(p.second%2 == 1 && mini > p.second){
                mini= p.second; 
            }
        }
        int x = maxi - mini;*/ 
        int maxi = 0, mini = 1e7;
        //case 2 : maxi odd min even
          for(auto &p: freq){
            if(p.second%2 == 1 && maxi < p.second){
                maxi = p.second; 
            }
            if(p.second%2 == 0 && mini > p.second){
                mini= p.second; 
            }
        }
        int y = maxi - mini; 
       // cout << x << " " << y << endl; 
        return y; 

    }
};
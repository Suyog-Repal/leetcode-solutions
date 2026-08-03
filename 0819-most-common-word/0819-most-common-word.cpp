class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_map<string, int> freq; 
        string para = "";
        for(char c: paragraph){
            if(ispunct(c)){
                para += ' ';
            }else
            para+= tolower(c);
        }
        stringstream ss(para); 
        string word; 
        while(ss >> word){
             
           freq[word]++; 
           for(string s: banned){
            if(word == s) freq[word] = 0;
           }
        }
        int maxi = 0;
        string ans; 
        for(auto &p: freq){
             if(p.second > maxi){
                 maxi = p.second;
                 ans = p.first;
            }
        }
        
        return ans;
    }
};
class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
       for(string s: details){
        int x = stoi(s.substr(11, 2));
        if(x>60){
            count++; 
        }
       }
       return count; 
    }
};
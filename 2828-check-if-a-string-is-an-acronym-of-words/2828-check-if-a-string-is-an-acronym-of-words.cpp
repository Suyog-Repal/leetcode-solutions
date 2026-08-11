class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        int n = words.size(); 
        string result = "";
        for(int i=0;i<n;i++){
           result += words[i][0]; 
        }
         return result==s;
    }
};
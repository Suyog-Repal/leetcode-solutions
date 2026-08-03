class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        for(string &s: words){
           for(char &c: s){
            if(c == separator){
                c = ' ';
            }
           }
        }
        vector<string> ans; 
        for(string s: words){
            stringstream ss(s);
            string word;
            while(ss >> word){
                ans.push_back(word);
            }
        }
        return ans; 
    }
};
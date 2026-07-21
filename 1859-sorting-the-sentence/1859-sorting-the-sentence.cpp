class Solution {
public:
    string sortSentence(string s) {
        stringstream ss(s); 
        string word; 
        map<int, string> mp; 
        while(ss >> word){
            int x = word.back(); 
            word.pop_back(); 
            mp[x] = word; 
        }
        string ans = "";
        for(auto &p: mp){
           ans+=p.second+' ';
        }
        ans.pop_back(); 
        return ans; 
    }
};
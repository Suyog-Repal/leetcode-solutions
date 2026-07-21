class Solution {
public:
    string sortSentence(string s) {
        vector<string> temp; 
        int start = 0; 
        int n = s.size(); 
        for(int i = 0; i<n; i++){
            if(s[i] == ' '){
             temp.push_back(s.substr(start, i-start));
             start = i+1;
            }
        }
        temp.push_back(s.substr(start, n-start)); 
        map<int, string> mp; 
        
        for(string t: temp){
           int x = t.back(); 
           t.pop_back(); 
           mp[x] = t; 
        }
        string ans = ""; 
        for(auto&p: mp){
            ans += p.second + ' ';
        }
        ans.pop_back(); 
        return ans; 
    }
};
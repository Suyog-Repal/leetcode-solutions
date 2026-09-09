class Solution {
public: 
/*    vector<pair<int, int>> maps(string &s){
       unordered_map<int, int> freq; 
       for(char c: s){
          freq[c-'0']++;
       }
       vector<pair<int, int>> result(freq.begin(), freq.end()); 
       return result; 
    }*/
    vector<pair<int, int>> maps(string &s){
        vector<pair<int, int>> freq; 
        for(int i=0; i<s.size(); i++){
            int count = 0; 
            char c = s[i]; 
            int j = i;
            for(; j<s.size(); j++){
                if(c == s[j]) count++; 
                else break; 
            }
            freq.push_back({count, c-'0'});
            i = j-1;  
        }
        return freq; 
    }
    string helper(vector<pair<int, int>> &v){
        string answer = ""; 
        for(auto &p: v){
            answer+=to_string(p.first); 
            answer+=to_string(p.second); 
        }
        return answer; 
    }
    string countAndSay(int n) {
        string s="1"; 
        for(int i=0; i<n-1; i++){
           vector<pair<int, int>> vs =  maps(s); 
           s =  helper(vs); 
        }
        return s;
    }
};
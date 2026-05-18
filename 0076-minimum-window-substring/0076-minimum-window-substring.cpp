class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size(); 
        int count = t.size(); 
        unordered_map<char, int> freq; 
        for(char c : t) freq[c]++; 
        int l =0; 
        int minLen = INT_MAX; 
        int start = 0; 
        for(int r = 0; r<n; r++){
             freq[s[r]]--; 
             if(freq[s[r]] >=0) count--; 
             while(count == 0){
                if(r-l+1 < minLen){
                    minLen = r-l+1;
                    start = l;  
                }
                freq[s[l]]++; 
                if(freq[s[l]] >0) count++; 
                l++; 
             }
        }
        if(minLen == INT_MAX) return ""; 
        return s.substr(start, minLen); 
    }
};
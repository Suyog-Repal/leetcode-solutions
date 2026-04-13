class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size(); 
        int count = t.size(); 
        int minLength = INT_MAX; 
        unordered_map<char, int> freq; 
        for(char c: t) freq[c]++; 
        int start = 0; 
        int l = 0; 
        for(int r = 0; r<n; r++){
            if(freq[s[r]] >0) count--; 
            freq[s[r]]--; 
            while(count ==0){
                if(r-l+1 < minLength){
                  minLength = r-l+1;
                  start = l; 
                }
                freq[s[l]]++; 
                if(freq[s[l]]>0) count++; 
                l++;  
            }
        }
        if(minLength == INT_MAX) return ""; 
        return s.substr(start, minLength); 
    }
};
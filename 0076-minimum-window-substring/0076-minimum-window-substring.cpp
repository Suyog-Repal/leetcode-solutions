class Solution {
public:
    string minWindow(string s, string t) {
        if(s.size() < t.size()) return ""; 
        unordered_map<char, int> freq; 
        int count = t.size(); 
        int n = s.size();
        for(char c: t) freq[c]++; 
        int start = 0; 
        int minLen = 1e7; 
        int l = 0; 
        for(int r = 0; r<n; r++){
            freq[s[r]]--; 
            if(freq[s[r]] >=0) count--; 
            while(count == 0){
                if(r-l+1 < minLen){
                    minLen = r-l+1;
                    start = l; 
                }
                freq[s[l]]++; 
                if(freq[s[l]]>0) count++; 
                l++; 
            }
        }
        if(minLen == 1e7) return ""; 
        return s.substr(start, minLen); 
    }
};
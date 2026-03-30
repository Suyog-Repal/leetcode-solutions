class Solution {
public:
    int balancedString(string s) {
        int n = s.size(); 
        int l = 0; 
        int ans = n; 
        int req = n/4; 
        unordered_map<char, int> freq; 
        for(char c: s) freq[c]++; 
        if(freq['Q'] < req && freq['R'] < req && freq['E'] < req && freq['W'] < req) return 0; 
        for(int r = 0; r<n; r++){
            freq[s[r]]--; 
            while(l<n && freq['Q'] <= req && freq['R'] <= req && freq['E'] <= req && freq['W'] <= req){
                ans = min(ans, r-l+1); 
                freq[s[l]]++; 
                l++; 
            }
        }
        return ans; 

    }
};
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        int m = s2.size(); 
        unordered_map<char, int> freqs1, freqs2; 
        for(char c: s1) freqs1[c]++; 
        int k = n; 
        for(int i =0; i<m; i++){
            freqs2[s2[i]]++; 
            if(i>=k){
                freqs2[s2[i-k]]--; 
                if(freqs2[s2[i-k]] == 0) freqs2.erase(s2[i-k]);
            }
            if(freqs1 == freqs2) return true; 
        }
        return false; 
    }
};
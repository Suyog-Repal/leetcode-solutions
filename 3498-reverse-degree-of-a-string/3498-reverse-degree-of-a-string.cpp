class Solution {
public:
    int reverseDegree(string s) {
        long long sum = 0; 
        int n = s.size(); 
        unordered_map<char, int>mp; 
    
      for(int i=0; i<26; i++){
        mp[i+'a'] = 26-i;  
      }
      for(int i = 0; i<n; i++){
         sum += mp[s[i]]*(i+1); 
      }
      
      return sum; 
    }
};
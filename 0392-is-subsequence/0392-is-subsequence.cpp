class Solution {
public:
    bool isSubsequence(string s, string t) {
        int x = 0; 
        int i = 0; 
        while(x<s.size() && i<t.size()){
            if(s[x] == t[i]){
                x++; 
            }
            i++; 
        }
      if(x == s.size()){
        return true; 
      }
      return false; 
    }
};
class Solution {
public:
    bool detectCapitalUse(string word) {
       bool found = false; 
       int n = word.size();
        int low = 0, up = 0;
        for(char c: word){
            if(c == toupper(c)){
                up++; 
            }else if(c == tolower(c)){
                low++;  
            }
        }
        if(up==word.size() || low == word.size()){
            return true; 
        }
        low = 0;
        if(word[0] == toupper(word[0])){
                for(int i =1;i<n; i++){
                 if(word[i] == tolower(word[i])){
                    low++;
                 }else{
                    return false; 
                 }
        }
      }
      if(low == n-1){
        found = true; 
      }
      return found; 
    }
};
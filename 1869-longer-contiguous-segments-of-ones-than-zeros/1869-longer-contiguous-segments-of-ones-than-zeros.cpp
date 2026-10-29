class Solution {
public:
    bool checkZeroOnes(string s) {
        int ones = 1; 
        int n = s.size(); 
        int maxiones = 1; 
        if(n == 1){
            if(s[0] == '1') return true; 
            else return false; 
        }
        for(int i=0; i<n-1; i++){
           if(s[i] == s[i+1] && s[i] == '1'){
            ones++; 
            maxiones = max(maxiones, ones); 
           }else{
              ones = 1; 
           }
        }
        int zeros = 1; 
        int maxizeros = 1; 
        for(int i=0; i<n-1; i++){
           if(s[i] == s[i+1] && s[i] == '0'){
            zeros++; 
            maxizeros = max(maxizeros, zeros); 
           }else{
              zeros = 1; 
           }
        }
        if(maxiones > maxizeros) return true; 
        return false; 
    }
};
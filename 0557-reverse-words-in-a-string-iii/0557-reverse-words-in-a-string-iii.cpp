class Solution {
public:
    string reverseString(string s){
       int i = 0; 
       int j = s.size() - 1; 
       while(i<j){
           swap(s[i], s[j]); 
           i++; 
           j--; 
       }
       return s; 
    }
    string reverseWords(string s) {
        s += " ";
        string req = "";
        int n = s.size(); 
        int x  = 0; 
        int start = 0; 
        for(int i = 0; i<n; i++){
            
            if(s[i] != ' '){
                x++;
            }else{
                req += reverseString(s.substr(start, x)) + " ";
                start  = i+1; 
                x = 0; 
            }
            
        }
        
        return req.substr(0, n-1);
    }
};
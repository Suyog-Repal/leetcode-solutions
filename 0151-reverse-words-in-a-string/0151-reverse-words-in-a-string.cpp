class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
     int k = 0; 
        for(int i = 0; i<n; i++){
            if(s[i] == ' '){
                k++; 
            }else break; 
        }

        int j = 0; 
        for(int i = n-1; i>=0; i--){
            if(s[i] == ' ') j++; 
            else break; 
        } 
        
        string required = s.substr(k, n-k-j); 
         n = required.size();

       string temp = "";
        string ans = "";

        for(int i = n-1; i>=0; i--){
            if(required[i] == ' ' && temp.size() != 0){
              reverse(temp.begin(), temp.end());
              ans += temp + " "; 
              temp ="";
            }else if(isalnum(required[i])){
                temp += required[i]; 
            }
        }
        reverse(temp.begin(), temp.end()); 

        return ans + temp;
    }
};
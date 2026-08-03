class Solution {
public:
    string largestEven(string s) {
       int n = s.size(); 
       int last = -1;
       for(int i=n-1;i>=0;i--){
        if(s[i]%2==0){
            last =i;
            break; 
        }
       }
       return s.substr(0, last+1);
    }
};
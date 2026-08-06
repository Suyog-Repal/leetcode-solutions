class Solution {
public:
    string makeFancyString(string s) {
      int n = s.size(); 
      int count = 1;
      string ans ="";
      for(int i =0;i<n;i++){
        if(i==0 ||  s[i] != s[i-1]){
            count=1;
        }else count++;
        if(count<3){
            ans += s[i]; 
        }
        
      } 
     return ans;  
    }
};
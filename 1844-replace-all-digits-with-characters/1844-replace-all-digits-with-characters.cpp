class Solution {
public:
   char shift(char c, int num){
    return c + num;
   }
    string replaceDigits(string s) {
        int n = s.size();
        string ans="";
        for(int i=0;i<n;i++){
            if(isalpha(s[i])) ans += s[i];
            if(isdigit(s[i])) ans += shift(s[i-1], s[i]-'0'); 
        }
        cout << ans << endl; 
        return ans;
    }
};
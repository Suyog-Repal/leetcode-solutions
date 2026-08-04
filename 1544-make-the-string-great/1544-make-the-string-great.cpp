class Solution {
public:
    string makeGood(string s) {
       string ans = ""; 
       int n = s.size();
       int i =0;
       while(i<n-1){
          if((s[i] == tolower(s[i+1]) && toupper(s[i]) == s[i+1])
           || s[i] == toupper(s[i+1]) && tolower(s[i]) == s[i+1] ){
            s.erase(i, 2);
            i=-1;
        }
        i++;
       }
       

       cout << s << endl; 
       return s; 
    }
};
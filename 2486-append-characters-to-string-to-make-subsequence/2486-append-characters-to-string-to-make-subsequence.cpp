class Solution {
public:
    int appendCharacters(string s, string t) {
        int x = 0; 
        int i = 0; 
        string ans = "";
        while(x<t.size() && i<s.size()){
            if(t[x] == s[i]){
                //ans += t[x];
                x++; 
            }else{
               i++;
               continue;
            }
            i++; 
        }
      
        return t.size()-x;
    }
};
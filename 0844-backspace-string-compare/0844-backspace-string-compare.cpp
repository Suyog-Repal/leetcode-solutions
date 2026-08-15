class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int n = s.size(); 
        for(int i =n-1;i>0;i--){
            if(s[i]=='#' && isalpha(s[i-1])){
                s.erase(i-1, 2);
            }
        }
        int z = t.size();
        for(int i=z-1;i>0; i--){
            if(t[i] == '#' && isalpha(t[i-1])){
                t.erase(i-1, 2);
            }
        }
        string x = "";
        string y = "";
       for(char c: s){
        if(c!='#'){
           x+=c;
        }else continue;
       }
       for(char c: t){
        if(c !='#') y+=c;
        else continue;
       }
       s = x;
       t = y;
        if(s == t) return true;
        return false;
    
    }
};
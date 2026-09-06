class Solution {
public:
    bool iscontain(string &s, string &allowed){
        if(s == allowed) return true; 
        int x = s.size();
         int count = 0; 
        for(char c: s){
            for(char p: allowed){
                if(c == p) count++; 
            }
        }
        if(count == x) return true; 
        return false; 
    }
    int countConsistentStrings(string allowed, vector<string>& words) {
        int cnt = 0; 
        for(string z: words){
            if(iscontain(z, allowed)) cnt++; 
        }
        return cnt; 
    }
};
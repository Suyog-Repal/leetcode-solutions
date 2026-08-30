class Solution {
public:
    bool validDigit(int n, int x) {
        string s = to_string(n); 
        if(s[0]-'0' == x) return false; 
        cout << s[0]-'0' << endl;
        char p = x+'0';
        cout << p << endl;
        int count = 0;
        for(char c: s){
            if(c ==p){
                count++; 
            }
        }
        if( count >= 1) return true;
        return false;
    }
};
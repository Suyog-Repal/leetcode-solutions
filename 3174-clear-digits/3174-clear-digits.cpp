class Solution {
public:
    string clearDigits(string s){
        int n =s.size();
        for(int i =0;i<n-1;){
            if(isalpha(s[i]) && isdigit(s[i+1])){
                s.erase(i, 2); 
                i=0;
            }else i++;
        }
        return s;
    }
};
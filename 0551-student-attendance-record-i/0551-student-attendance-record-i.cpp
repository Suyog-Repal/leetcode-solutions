class Solution {
public:
    bool checkRecord(string s) {
        //for late
    bool found = true;
    int n = s.size();
            int count = 1; 
        for(int i=0;i<n-1;i++){
            if(s[i] == 'L' && s[i+1] == 'L'){
                count++; 
            }else count = 1; 
            if(count >=3){
                found = false; 
                break;
            }
        }
        int absent =0;
        for(char c: s) if(c=='A') absent++;
       if(found && absent<2){
        return true;
       }
       return false; 
    }
};
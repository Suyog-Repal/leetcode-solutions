class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        int temp = -1; 
        for(int i = n-1; i>=0; i--){
            if(num[i]%2 == 1){
                temp  = i; 
                break; 
            }
        }
        if(temp == -1) return "";
        return num.substr(0, temp+1);
    }
};
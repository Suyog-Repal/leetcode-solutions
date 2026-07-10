class Solution {
public:
    bool isSameAfterReversals(int num) {
        if(num >= 0 && num <=9) return true; 
        bool ans = true; 
        if(num%2 == 0 && num%5 ==0) ans = false; 
        return ans;  
    }
};
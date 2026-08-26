class Solution {
public:
    int reversednum(int n){
       int ans = 0; 
       while(n){
         int digit = n%10; 
         ans = ans*10 + digit; 
         n=n/10;
       } 
       return ans; 
    }
    int mirrorDistance(int n) {
        return abs(n - reversednum(n)); 
    }
};
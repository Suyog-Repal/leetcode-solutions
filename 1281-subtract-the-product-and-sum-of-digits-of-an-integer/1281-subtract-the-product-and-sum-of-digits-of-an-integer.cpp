class Solution {
public:
    int subtractProductAndSum(int n) {
        if(n<10 && n>0) return 0;
        int product = 1; 
        int sum = 0; 
        while(n){
            int digit = n%10; 
            product = product*digit; 
            sum += digit; 
            n = n/10; 
        }
        
        return product - sum; 
    }
};
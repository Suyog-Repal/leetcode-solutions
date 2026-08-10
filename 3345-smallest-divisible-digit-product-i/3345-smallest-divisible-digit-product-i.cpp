class Solution {
public:
    int productofdigits(int n){
        int x = n; 
        int ans = 1;
        while(x){
            int digit = x%10; 
            ans *= digit; 
            x = x/10;
        }
        return ans; 
    }
    int smallestNumber(int n, int t) {
     
        while(true){
            if(productofdigits(n)%t==0){
               break;
             } n++;
        }
        return n;
    }
};
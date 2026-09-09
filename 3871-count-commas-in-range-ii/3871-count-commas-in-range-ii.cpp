class Solution {
public:
    long long countCommas(long long n) {
        long long sum = 0;
         long long ans = 0; 
         if(n<1000){
            return 0; 
         }
         if(n>=1000){
            sum+= n-1000+1; 
         }
         if(n>=1000000LL){
            sum+= n-1000000LL+1; 
         }
         if(n>=1000000000LL){
            sum+= n-1000000000LL+1; 
         }
         if(n>=1000000000000LL){
            sum+= n-1000000000000LL+1;
         }
         if(n>=1000000000000000LL) sum+= n-1000000000000000LL+1;
         return sum;
    }
};
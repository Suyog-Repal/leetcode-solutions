class Solution {
public:
    bool judgeSquareSum(int c) {
       
        for(long long i=0;i*i<=c;i++){
            long long target = (long long) c-(i*i);
            long long low = 0; 
            long long  high = sqrt(c); 
            while(low<=high){
                long long mid = low + (high-low)/2; 
                if(mid*mid == target){
                    return true;
                }else if(mid*mid < target){
                    low = mid+1;
                }else high = mid-1;
            }

        }
        return false; 
    }
};
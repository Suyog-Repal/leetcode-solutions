class Solution {
public:
    int alternateDigitSum(int n) {
        int sum1 = 0; 
        int sum2 = 0;
        int count1 = 0; 
        int count2 =1;
        int cnt = 0; 
        int f = n;
        while(f){
            int digit = f%10; 
            if(count1 ==0){
                sum1+=digit; 
                count1 =1;
            }else{
                sum1 -=digit; 
                count1 = 0; 
            }
            if(count2 == 1){
                sum2-=digit; 
                count2 = 0;
            }else{
                sum2+=digit; 
                count2 = 1; 
            }
            f=f/10;
            cnt++;
        }
        if(cnt%2==0){
            return sum2; 
        }
        return sum1; 
    }
};
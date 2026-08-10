class Solution {
public:
    int smallestRepunitDivByK(int k) {
       if(k%2==0 || k%5==0) return -1; 
       long long num = 0;
        int count =0;
       while(true){
         num = (num*10 + 1)%k; 
         count++;
         if(num == 0)break; 
       }
       return count;
    }
};
class Solution{
public:
    int digitsum(int n){
        int sum = 0; 
        while(n){
            int digit = n%10;
            sum+=digit; 
            n=n/10;
        }
        return sum;
    }
    int largestInteger(int n, int s) {
      int x = pow(10, n); 
      
      int maxi = -1;
       for(int i=x-1; i>=0;i--){
          if(digitsum(i) == s){
            return i; 
          }
       }
       return -1; 
    }
};
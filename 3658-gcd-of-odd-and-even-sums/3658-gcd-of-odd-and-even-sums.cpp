class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int odd = 0; 
        int even = 0; 
        for(int i = 1; i<=2*n; i++){
            if(i%2 == 0){
                even += i; 
            }else{
                odd+=i;
            }
        }
      int a = even, b = odd; 
      while(a != 0 && b != 0){
        if(a>b) a = a%b; 
        else b = b%a; 
      }
      if(a == 0) return b; 
      return a; 
    }
};
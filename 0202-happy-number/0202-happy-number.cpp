class Solution {
public:
    int getNext(int n){
        int sum = 0; 
        while(n>0){
            int d = n%10; 
            sum = sum + d*d; 
            n /= 10; 
        }
        return sum; 
    }
    bool isHappy(int n) {
          int slow = n; 
          int fast =n; 
          while(fast != 1 ){
             slow = getNext(slow);  // moving by 1 step; 
             fast = getNext(getNext(fast));  // moving by 2 steps
             if(fast == 1) return true; 
             if(slow == fast) return false; 
          }
          return fast == 1; 
    }
};
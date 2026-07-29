class Solution {
public:
    int trailingZeroes(int n) {
     int count2 = 0; 
     int x = n, y = n; 
     while(x>0){
       x = x/2; 
       count2+=x;
     }
     int count5=0;
     while(y>0){
        y = y/5; 
        count5+=y;
     }
     return min(count2, count5);
    }
};
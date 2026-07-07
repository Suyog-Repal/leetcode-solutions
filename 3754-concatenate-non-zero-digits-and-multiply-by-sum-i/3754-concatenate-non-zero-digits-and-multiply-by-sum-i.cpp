class Solution {
public:
    long long sumAndMultiply(int n) {
        long long  x = n; 
        long long sum = 0;
        long long num = 0; 
        string s = ""; 
        while(x){
           int digit = x%10; 
           //if(digit != 0) num = num*10 + digit;
           if(digit != 0)   s+= to_string(digit); 
           sum += digit; 
           x = x/10; 
        }
        reverse(s.begin(), s.end()); 
        if(s.empty()) num = 0; 
        else  num = stoll(s);  
      return sum*num; 
    }
};
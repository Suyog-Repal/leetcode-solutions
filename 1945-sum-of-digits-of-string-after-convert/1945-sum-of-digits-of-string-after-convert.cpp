class Solution {
public:
    int getLucky(string s, int k) {
     int n = s.size(); 
     string temp = "";
     while(n>0){
        temp+= to_string(s[--n]-'a'+1);  
     }
     cout << temp << endl; 
     int sum = 0; 
     int x = temp.size(); 
     while(x){
      sum += (temp[--x]-'0'); 
     }
     cout << sum << endl; 
     k = k-1; 
     int number = sum;
     int result =0;
     if(k == 0) return sum; 
     while(k){
     result = 0;
      while(number){
        int digit = number%10; 
         result += digit; 
         number = number/10;
      }
      number = result; 
      k--;
     }
     return result;  
    }
};
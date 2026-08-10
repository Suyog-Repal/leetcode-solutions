class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n = s.size();
         int ones = count(s.begin(), s.end(), '1');
        int x = ones-1; 
        string result = "";
        while(x--){
          result += '1'; 
        }
         n = n-ones;
        while(n){
            result +='0';
            n--;
        }
        result+='1';
        return result; 
    }
};
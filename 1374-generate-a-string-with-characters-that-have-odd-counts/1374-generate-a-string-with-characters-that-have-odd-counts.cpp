class Solution {
public:
    string generateTheString(int n) {
        
        if(n%2 == 1){
          string word(n, 'a'); 
          return word; 
        }
            string temp(n-1, 'a'); 
            temp+='b'; 
            return temp; 
        
    }
};
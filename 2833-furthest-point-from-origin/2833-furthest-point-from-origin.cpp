class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
       string first = "", second = ""; 
       for(char c: moves){
        if(c == '_'){
            first+= 'L'; 
            second += 'R';
        }else{
            first += c;
            second+=c;
        }
       }
       int ans = 0; 
       int left=0;
       int right = 0;
       for(char c: first){
         if(c == 'L'){
            left++;
         }else left--;
       }
       for(char c: second){
        if(c == 'R')right++;
        else right--;
       }
       left = abs(left);
       right = abs(right);
       ans = max(left, right); 
       return ans; 
       
    }
};
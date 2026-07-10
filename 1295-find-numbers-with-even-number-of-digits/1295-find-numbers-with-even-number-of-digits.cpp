class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size(); 
        int count = 0; 
        for(int x : nums){
            int num = x; 
            int digits = 0;
            while(num){
             int digit = num%10;
               digits++; 
               num = num/10; 
            }
            if(digits%2==0) count++; 
         }
         return count; 
    }
};
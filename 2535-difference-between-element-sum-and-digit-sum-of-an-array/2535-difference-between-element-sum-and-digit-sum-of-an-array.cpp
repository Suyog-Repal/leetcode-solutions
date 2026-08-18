class Solution {
public:
    int digitsum(const vector<int>& nums){
       int sum = 0; 
       for(int i=0;i<nums.size(); i++){
          int x = nums[i]; 
          while(x){
            int digit = x%10; 
            sum+=digit; 
            x/=10;
          }
       }
       return sum; 
    }
    int differenceOfSum(vector<int>& nums) {
        int sums=0; 
        for(int n: nums) sums += n; 
         int y = digitsum(nums); 
         cout << sums << " " << y << endl; 
         return abs(sums-y);
    }
};
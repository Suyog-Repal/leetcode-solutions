class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l= 0; 
        int r = 0; 
        int n = nums.size();
        while(l<n){
            if(nums[l] !=0){
                swap(nums[l], nums[r]);
                r++; 
            }
            l++; 
        }
    }
};
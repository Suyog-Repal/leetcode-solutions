class Solution {
public:
       vector<int> swaps(vector<int> &nums, int l, int r){
         while(l<r){
            swap(nums[l], nums[r]); 
            l++; 
            r--; 
         }
         return nums; 
       }
    void rotate(vector<int>& nums, int k) {
        // k to be bounded so % operator:
        int n = nums.size();
        k = k%n; 
        swaps(nums, 0, n-1);
        swaps(nums, 0, k-1); 
        swaps(nums, k, n-1); 
    }
};
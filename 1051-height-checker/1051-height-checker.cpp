class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> nums(heights.begin(), heights.end()); 
        sort(nums.begin(), nums.end()); 
        int count = 0; 
        int n = nums.size(); 
        for(int i=0; i<n; i++){
            if(nums[i]!= heights[i]) count++; 
        }
        return count; 
    }
};
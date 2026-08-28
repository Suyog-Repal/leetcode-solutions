class Solution {
public:
   void  generatepermutation(vector<int> &nums, int index, vector<vector<int>> &result){
        if(index == nums.size()){
            result.push_back(nums); 
            return; 
        }
        unordered_set<int>used; 
        for(int i = index;i<nums.size(); i++){
            if(used.count(nums[i])) continue;
            used.insert(nums[i]);
            swap(nums[index], nums[i]); 
            generatepermutation(nums, index+1, result); 
            swap(nums[i], nums[index]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> result; 
        generatepermutation(nums, 0, result); 
        return result; 
    }
};
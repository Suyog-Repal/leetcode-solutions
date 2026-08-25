class Solution {
public:
    bool isnotthere(const vector<int>&nums, int target){
       for(int x: nums){
        if(target == x) return false; 
       }
       return true; 
    }
    int missingMultiple(vector<int>& nums, int k) {
        int i = 1; 
        while(true){
            int m = k*i;
            if(isnotthere(nums, m)){
                return m; 
            }
            i++;
        }
        return -1;
    }
};
class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        // find the majority element: 
        
        int n = nums.size(); 
        vector<int> prefix(n+1); 
        prefix[0] = 0; 
        for(int i = 0; i<n; i++){
            if(nums[i] == target){
                nums[i] = 1; 
            }else nums[i] = -1; 
        }
        for(int i = 1; i<=n; i++){
            prefix[i] = prefix[i-1] + nums[i-1]; 
        }
        int count = 0; 
        for(int l = 0; l<n; l++){
            for(int r = l; r<n; r++){
                        if(prefix[r+1] - prefix[l]>0){
                count++; 
            }
            }
    
         }
         return count; 
    }
};
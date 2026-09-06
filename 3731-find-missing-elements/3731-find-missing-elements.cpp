class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int mini = *min_element(nums.begin(), nums.end()); 
        int maxi = *max_element(nums.begin(), nums.end()); 
        //sort(nums.begin(), nums.end()); 
        int n = nums.size();
        vector<int> result; 
        for(int i = mini; i<=maxi; i++){
            bool found = false; 
            for(int j = 0; j<n; j++){
               if(i == nums[j]){
                     found = true; 
                     break; 
               }
            }
            if(!found){
                result.push_back(i); 
            }else continue;
        }
        return result; 
    }
};
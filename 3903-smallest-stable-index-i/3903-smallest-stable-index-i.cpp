class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();  
        int ans = -1; 
        for(int i=0; i<n;i++){
            int x = *max_element(nums.begin(), nums.begin()+i); 
            int y = *min_element(nums.begin()+i, nums.end()); 
            if(x- y <=k){
                ans = i; 
                break;
            }
        }
       return ans; 
    }
};
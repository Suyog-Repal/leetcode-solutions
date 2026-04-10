class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n = nums.size(); 
        int dist = INT_MAX; 
        for(int i =0; i<n; i++){
            for(int j = i+1; j<n; j++){
                //if(nums[i] == nums[j]) int temp = nums[j]; 
                for(int k = j+1; k<n; k++){
                    if(nums[i] == nums[j] && nums[j] == nums[k] && nums[i] == nums[k]){
                        
                        dist = min(dist, abs(i - j) + abs(j - k) + abs(k - i)); 
                    }
                }
            }
        }
        if(dist == INT_MAX) return -1; 
        return dist; 
    }
};
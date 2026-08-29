class Solution {
public:
    int averageValue(vector<int>& nums) {
        int ans = 0; 
        int n = nums.size(); 
        int count = 0;
        for(int i=0;i<n;i++){
          if(nums[i]%6==0){
            ans+= nums[i]; 
            count++; 
          }
        }
        if(count == 0) return 0;
        return ans/count; 
    }
};
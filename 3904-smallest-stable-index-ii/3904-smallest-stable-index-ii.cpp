class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size(); 
        int ans = -1;
         vector<int> prefixmax(n); 
         vector<int> suffixmin(n);
         prefixmax[0] = nums[0];
         for(int i=1;i<n;i++){
            prefixmax[i] = max(prefixmax[i-1], nums[i]); 
         } 
         suffixmin[n-1] = nums[n-1];
         for(int i = n-2; i>=0; i--){
            suffixmin[i] = min(suffixmin[i+1], nums[i]);
         }
        for(int i=0; i<n;i++){       
            if(prefixmax[i] - suffixmin[i] <=k){
                ans = i;
                break; 
            }
        }
        return ans; 
    }
};
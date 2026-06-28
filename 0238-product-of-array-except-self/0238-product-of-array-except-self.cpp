class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums){
        int zeroCount = 0; 
        int n = nums.size();
        int product = 1; 
        for(int i = 0; i<n; i++){
            if(nums[i] != 0){
                product *= nums[i]; 
            }else{
                zeroCount++; 
            }
        }
       vector<int> result(n, 0);
       for(int i = 0; i<n; i++){
         if(zeroCount <1){
           result[i] = product/nums[i];
         }else if(zeroCount == 1){
             if(nums[i] == 0) result[i] = product; 
         }else break; 
       }
       return result; 
    }
};
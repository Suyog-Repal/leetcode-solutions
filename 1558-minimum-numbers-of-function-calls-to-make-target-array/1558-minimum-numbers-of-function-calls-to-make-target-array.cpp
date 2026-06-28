class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr(n, 0); 
        int count = 0; 
        
        int totalDiv = 0; 
         for(int num : nums){
            int div = 0; 
            if(num == 0) continue; 
            while(num > 0){
                if(num%2 == 1){
                    num--; 
                    count++; 
                }else{
                    num = num/2; 
                    div++; 
                }
            }
            totalDiv = max(totalDiv, div);
         }
         return count + totalDiv ;

    }
};
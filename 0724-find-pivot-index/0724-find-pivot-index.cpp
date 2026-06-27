class Solution {
public:
    vector<int> prefix; 
     int sumPrefix(int left, int right){
        if(left>right) return 0; 
        if(left == 0) return prefix[right]; 
        return prefix[right] - prefix[left-1]; 
     }
    int pivotIndex(vector<int>& nums) {
        int n= nums.size(); 
        prefix.resize(n); 

        prefix[0] = nums[0]; 

        for(int i = 1; i<n; i++){
          prefix[i] = prefix[i-1] + nums[i]; 
        }
        
        for(int x = 0; x<n; x++){
            if(sumPrefix(0, x-1) == sumPrefix(x+1, n-1)){
                return x;  
            }
        }
        return -1; 
    }
};
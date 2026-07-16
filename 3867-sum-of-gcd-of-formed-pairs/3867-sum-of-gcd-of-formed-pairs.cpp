class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size(); 
        vector<int> prefix(n); 
        prefix[0] = nums[0]; 
        int maxi = nums[0]; 
        
        for(int i = 1; i<n; i++){
          maxi = max(maxi, nums[i]); 
          prefix[i] = gcd(maxi, nums[i]); 
        }
        sort(prefix.begin(), prefix.end()); 
        int left = 0; 
        int right = n-1; 
        long long sum = 0; 
        while(left < right){
           sum += gcd(prefix[left], prefix[right]); 
           left++; 
           right--;
        }
        return sum; 
    }
};
class  Solution {
    public: 
     long long gcdSum(vector<int>& nums){
      int n = nums.size(); 
      if(n == 0) return 0; 
        vector<long long> prefix(n); 
        int  maxi = nums[0]; 
        prefix[0] = nums[0]; 
        for(int  i = 1; i<n; i++){
            maxi = max(maxi, nums[i]); 
            prefix[i] = gcd(maxi, nums[i]); 
        }
        sort(prefix.begin(), prefix.end()); 
        long long left = 0; 
        long long  right = n-1; 
        long long sum = 0; 
        while(left<right){
           sum += gcd(prefix[left], prefix[right]);
           left++; 
           right--;  
        }
        return sum; 
    }
};
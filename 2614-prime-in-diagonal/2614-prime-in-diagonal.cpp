class Solution {
public:
    bool isprime(int n){
        if(n<2) return false; 
        if(n==2) return true; 
        if(n%2==0) return false; 
        for(int i=3; i*i<=n;i++){
            if(n%i==0) return false; 
        }
        return true; 
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        int m= nums.size(); 
        int n = nums[0].size(); 
        int maxi = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
              if(isprime(nums[i][j])){
                if(i==j || i+j == n-1){
                    maxi = max(maxi, nums[i][j]);
                }
              }
            }
        }
        return maxi; 
    }
};
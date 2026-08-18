class Solution {
public:
    bool isprime(int n){
        if(n<2) return false; 
        if(n == 2) return true; 
        if(n%2 ==0) return false; 
        for(int i=3; i*i<=n;i+=2){
            if(n%i==0) return false; 
        }
        return true;
    }
    int mod = 1e9+7;
    int facto(int n){
        vector<int> dp(n+1); 
        if(n<2) return 1; 
        dp[0] = 1; 
        dp[1] = 1;
        for(int i=2; i<=n;i++){
            dp[i] = (1LL*i*dp[i-1])%mod;
        }
        return dp[n];
    }
    int numPrimeArrangements(int n) {
        int count = 0;
        for(int i=1;i<=n;i++){
            if(isprime(i)) count++;
        }
        int ans = (1LL*facto(count)*facto(n-count))%mod; 
        return ans; 
    }
};
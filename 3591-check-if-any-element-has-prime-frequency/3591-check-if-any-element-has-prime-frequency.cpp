class Solution {
public:
    bool isprime(int n){
        if(n<2) return false; 
        if(n==2) return true; 
        if(n%2==0) return false; 
        for(int i=3;i*i<=n;i+=2){
            if(n%i==0){
                return false; 
            }
        }
        return true; 
    }
    bool checkPrimeFrequency(vector<int>& nums) {
        unordered_map<int, int> freq; 
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++; 
        }
       for(auto &p: freq){
        if(isprime(p.second)){
            return true;
        }
       }
       return false;
    }
};
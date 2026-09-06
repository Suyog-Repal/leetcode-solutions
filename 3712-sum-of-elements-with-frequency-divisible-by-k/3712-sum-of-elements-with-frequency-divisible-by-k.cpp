class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        int sum = 0; 
        unordered_map<int, int> freq; 
        for(int x: nums) freq[x]++; 
        for(auto &p: freq){
            if(p.second%k == 0){
                sum += p.first*p.second; 
            }
        }
        return sum; 
    }
};
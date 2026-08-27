class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int, int> freq; 
        vector<int>result; 
        for(int x: nums)freq[x]++; 
        for(auto &p: freq){
            if(p.second == 1) result.push_back(p.first); 
        }
        return result; 
    }
};
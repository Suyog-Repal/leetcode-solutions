class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        unordered_map<int, int> freq; 
        for(int x: nums) freq[x]++; 
        int n = nums.size(); 
        for(int i=0; i<n;i++){
           if(freq[nums[i]]==1 && nums[i]%2==0) return nums[i];
        }
        return -1;
    }
};
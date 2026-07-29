class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
      int sum = 0;
      for(int x: nums) sum+=x;
      if(sum%k==0) return 0;
      return sum%k; 
    }
};
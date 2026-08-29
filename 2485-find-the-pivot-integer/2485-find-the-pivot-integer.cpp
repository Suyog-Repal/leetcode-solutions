class Solution {
public:
    int sum(vector<int> &prefix, int left, int right){
        if(left== 0) return prefix[right]; 
        return prefix[right]-prefix[left-1];
    }
    int pivotInteger(int n) {
        vector<int> nums(n); 
        for(int i=0;i<n;i++){
            nums[i] = i+1; 
        }
        vector<int> prefix(n);
        prefix[0] =nums[0]; 
        for(int i=1;i<n;i++){
            prefix[i] = prefix[i-1] + nums[i]; 
        }
        for(int i=0;i<n;i++){
          if(sum(prefix, 0, i) == sum(prefix, i, n-1)){
            return nums[i]; 
          }
        }
        return -1;
    }
};
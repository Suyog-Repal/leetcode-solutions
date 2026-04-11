class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
     
        int n = numbers.size(); 
        int l = 0; 
        int r = n-1; 
        while(l<r){
            int sum = numbers[l] + numbers[r]; 
            if(sum == target){
                return {l+1, r+1}; 
                while(l<r && numbers[l] == numbers[l+1]) l++; 
                while(l<r && numbers[r] == numbers[r-1]) r--; 
                l++; 
                r--; 
            }else if(sum < target){
                l++; 
            }else r--; 
        }
        return {};
    }
};
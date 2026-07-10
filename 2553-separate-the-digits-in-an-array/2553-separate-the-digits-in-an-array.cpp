class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> result; 
        for(int x: nums){
            int num = x; 
            vector<int> temp; 
            while(num){
              int digit = num%10; 
              temp.push_back(digit); 
              num = num/10; 
            }
            reverse(temp.begin(), temp.end()); 
            for(int y: temp) result.push_back(y);
        }
        return result; 
    }
};
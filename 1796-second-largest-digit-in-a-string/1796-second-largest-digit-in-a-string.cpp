class Solution {
public:
    int secondHighest(string s) {
        int maxi = 0; 
        vector<int> nums; 
        for(char c: s){
            if(isdigit(c)){
                nums.push_back(c-'0');
                maxi = max(maxi, (c-'0'));
            }
        }
          if(nums.empty()) return -1;
        sort(nums.rbegin(),nums.rend()); 
        for(int x: nums){
         if(x<maxi){
            return x; 
         }
        }
        return -1;
    }
};
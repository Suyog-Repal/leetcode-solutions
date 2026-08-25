class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        long long singlesum= 0, doublesum = 0;
        int n= nums.size(); 
        for(int x: nums){
            if(x<10) singlesum += x;
            else doublesum+=x;
        }
        if(singlesum == doublesum) return false; 
        return true;
    }
};
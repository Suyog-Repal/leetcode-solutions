class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
    int odd = 0, even = 0; 
    int n = nums1.size(); 
    for(int x: nums1){
        if(x&1) odd++; 
        else even++;
    }
    if(odd == n|| even == n) return true; 
     sort(nums1.begin(), nums1.end()); 
     if(nums1[0]%2==1) return true; 
     return false; 
    }
};
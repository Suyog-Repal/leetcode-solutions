class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp; 
        stack<int> st; 
        for(int num : nums2){
            while(!st.empty() && num>st.top()){
                mp[st.top()] = num;
                st.pop();
            }
            st.push(num); 
        }
        // now making the remaining element -1; 
        while(!st.empty()){
            mp[st.top()] = -1; 
            st.pop(); 
        }
        vector<int> result; 
        for(int i =0; i<nums1.size(); i++){
            result.push_back(mp[nums1[i]]);
        }
        return result; 
    }
};
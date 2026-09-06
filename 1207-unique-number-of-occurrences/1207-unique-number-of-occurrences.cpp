class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq; 
        for(int x: arr) freq[x]++;
        unordered_set<int> st; 
        for(auto &p: freq){
            st.insert(p.second); 
        }
        if(st.size() != freq.size()) return false; 
        return true;
    }
};
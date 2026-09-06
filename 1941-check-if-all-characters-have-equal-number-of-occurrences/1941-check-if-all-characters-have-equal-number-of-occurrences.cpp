class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> freq; 
        for(char c: s) freq[c]++; 
        unordered_set<int>st; 
        for(auto &p: freq){
           st.insert(p.second); 
        }
        if(st.size() == 1) return true; 
        return false; 
    }
};
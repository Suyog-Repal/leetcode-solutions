class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.size(); 
        if(n<k){
            reverse(s.begin(), s.end()); 
            return s; 
        }
        for(int i =0;i<n; i+=2*k){
            string ans = s.substr(i, k); 
            reverse(ans.begin(), ans.end()); 
            s.replace(i, k, ans); 
        }
        return s; 
    }
};
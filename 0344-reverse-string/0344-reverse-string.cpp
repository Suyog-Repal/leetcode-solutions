class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        vector<char> req(n);
        for(int i = n-1; i>=0; i--){
            req[i]= s[n-i-1]; 
        }
        for(int i = 0; i<n; i++){
            s[i] = req[i];
        }
    }
};
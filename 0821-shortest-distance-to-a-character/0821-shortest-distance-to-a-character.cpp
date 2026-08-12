class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>result;
        int n = s.size();
        for(int i=0;i<s.size(); i++){
            int x = 0;
            int ans = 0;
            for(int j = i;j<n;j++){
                if(s[j] == c){
                     x =j;
                    break; 
                }
            }
            int p = 1e7; 
            for(int k = i;k>=0;k--){
                if(s[k] == c){
                  p = k; 
                  break; 
                }
            }
           ans = abs(i-x);
           int ans2 = abs(i-p);
           ans = min(ans, ans2); 
           result.push_back(ans);
        }
        return result; 
    }
};
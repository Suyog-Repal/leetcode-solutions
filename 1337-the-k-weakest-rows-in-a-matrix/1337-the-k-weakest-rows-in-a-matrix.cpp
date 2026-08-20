class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        unordered_map<int, int> mp; 
        int m  = mat.size(); 
        int n = mat[0].size(); 
        for(int i=0;i<m;i++){
            int count = 0;
            for(int j = 0;j<n;j++){
              if(mat[i][j] ==1){
                count++; 
              }

            }
            mp[i] = count; 
        }
        vector<pair<int, int>> v(mp.begin(), mp.end()); 
        sort(v.begin(), v.end(), [](const pair<int, int>&a, const pair<int, int>&b){
            if(a.second != b.second){
                return a.second < b.second;
            }else return  a.first < b.first;
        });
        vector<int> result; 
        for(auto &p: v){
            if(result.size() == k) break;
           result.push_back(p.first); 
        }
        return result;
    }
};
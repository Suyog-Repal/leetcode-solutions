class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m = mat.size(); 
        int n = mat[0].size();
        vector<int> ans;
      
        for(int d = 0; d<m+n-1; d++){
            vector<int> temp; 
            for(int i = 0; i<m; i++){
                int j = d-i;
                if(j>=0 && j<n){
                    temp.push_back(mat[i][j]);
                }
            }
            if(d%2 == 0) reverse(temp.begin(), temp.end()); 

            for(int x : temp){
                ans.push_back(x); 
            }
        }
        return ans;
    }
};
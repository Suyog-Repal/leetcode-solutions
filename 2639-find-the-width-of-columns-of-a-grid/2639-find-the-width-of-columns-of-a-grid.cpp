class Solution {
public:
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        vector<int> result; 

          int m = grid.size(); 
          int n = grid[0].size();

          for(int j = 0; j<n; j++){
            int maxLength = 0; 
               for(int i = 0; i<m; i++){
                    string s = to_string(grid[i][j]); 
                    maxLength = max(maxLength, (int)s.size());
               }
     
               result.push_back(maxLength); 
          }
       return result; 
    }
};
class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size(); 
        int n = matrix[0].size(); 
          vector<vector<int>> answer(m, vector<int>(n));
        //first find the max element column wise 
        // then replace -1 with that max element 
        // push to the ans vector
        vector<int> maxis; 
        for(int j = 0; j<n; j++){
            int maxi = 0; 
            for(int i = 0; i<m; i++){
                maxi = max(maxi, matrix[i][j]); 
            }
            maxis.push_back(maxi); 
        }

        for(int j = 0; j<n; j++){
            for(int i = 0; i<m; i++){
                if(matrix[i][j] == -1){
                    answer[i][j] = maxis[j]; 
                }else{
                    answer[i][j] = matrix[i][j];
                }
            }
        }
        return answer; 
    }
};
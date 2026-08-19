class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int>mini; 
        vector<int> maxi; 
        int m = matrix.size();
        int n = matrix[0].size(); 
        for(int i=0;i<m;i++){
            int minimum = 1e7;
            for(int j = 0;j<n; j++){
               minimum = min(minimum, matrix[i][j]);
            }
            mini.push_back(minimum);
        }
        for(int j =0;j<n;j++){
            int maximum = 0;
            for(int i=0;i<m;i++){
              maximum = max(maximum, matrix[i][j]);
            }
            maxi.push_back(maximum);
        }
        vector<int>result; 
        for(int i=0;i<maxi.size(); i++){
            for(int j = 0;j<mini.size();j++){
              if(maxi[i] == mini[j]){
               result.push_back(maxi[i]);
              }
            }
        }
        return result; 
    }
};
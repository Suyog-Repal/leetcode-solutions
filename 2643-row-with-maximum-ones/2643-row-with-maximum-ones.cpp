class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int m = mat.size(); 
        int n = mat[0].size(); 
        int maxcount = 0; 
        int rownum = 0; 
        for(int i=0;i<m;i++){
            int count = 0;
            for(int j=0;j<n;j++){
              if(mat[i][j] == 1) count++;
            }
            if(maxcount < count){
                maxcount = count; 
                rownum = i;
            }
        }
        vector<int> result;
        result.push_back(rownum); 
        result.push_back(maxcount);
        return result; 
    }
};
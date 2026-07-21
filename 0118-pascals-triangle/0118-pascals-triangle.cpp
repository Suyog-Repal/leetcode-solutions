class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result; 
        for(int i = 0; i<numRows; i++){
            vector<int> temp; 
            long long coeff = 1; 
            for(int j = 0; j<=i; j++){
                temp.push_back(coeff); 
                coeff = coeff*(i-j)/(j+1);
            }
            result.push_back(temp); 
        }
        return result; 
    }
};
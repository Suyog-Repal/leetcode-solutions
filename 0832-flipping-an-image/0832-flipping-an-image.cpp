class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int m = image.size(); 
        int n = image[0].size();
        vector<vector<int>> ans; 
        for(int i =0; i<m; i++){
            vector<int> temp; 
            for(int j = 0; j<n; j++){
                if(image[i][j] == 1){
                    temp.push_back(0); 
                }else{
                    temp.push_back(1); 
                }
            }
            reverse(temp.begin(), temp.end()); 
           ans.push_back(temp); 
        }
        return ans; 
    }
};
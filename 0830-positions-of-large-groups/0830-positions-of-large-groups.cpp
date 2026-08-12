class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        int n = s.size(); 
        vector<vector<int>> result; 
        for(int i=0;i<n;i++){
            vector<int> temp; 
            int count =0;
            for(int j = i;j<n;j++){
                if(s[i] == s[j]){
                   count++;
                }else break; 
            }
            if(count>=3){
              temp.push_back(i);
              temp.push_back(i+count-1);
              i +=count-1;
            }else continue;
            result.push_back(temp);
        }
        return result; 
    }
};
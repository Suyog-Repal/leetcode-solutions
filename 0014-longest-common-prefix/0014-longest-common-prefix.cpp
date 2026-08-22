class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];
        int n = strs.size();
        int first  = strs[0].size();
        for(int i=0;i<n;i++){
            if(prefix[0]!=strs[i][0]){
                return "";
            }
        } 
      for(int i=0;i<n;i++){
            if(prefix[1]!=strs[i][1]){
                return prefix.substr(0, 1);
            }
        } 
        for(int i=1; i<n;i++){
            string p = strs[i];
            while(p.find(prefix)==string::npos){
              prefix.pop_back(); 
              cout << prefix << endl;
            }
        }
        return prefix; 
    }
};
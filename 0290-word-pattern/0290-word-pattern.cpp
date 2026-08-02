class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream ss(s); 
        string word; 
        int n = pattern.size();
       
        vector<string> a;
        while(ss >> word){
           a.push_back(word); 
        }
         if(pattern.size() != a.size()) return false; 
        unordered_map<char, string> mp; 
       for(int i=0;i<n; i++){
          if(mp.count(pattern[i])>0){
            if(mp[pattern[i]] != a[i]) return false; 
          }else mp[pattern[i]] = a[i];
       }
       unordered_map<string, char> mp2;
       for(int i=0;i<a.size(); i++){
         if(mp2.count(a[i])){
           if(mp2[a[i]] != pattern[i]) return false; 
         }else{
            mp2[a[i]] = pattern[i];
         }
       }

      return true; 
    }
};
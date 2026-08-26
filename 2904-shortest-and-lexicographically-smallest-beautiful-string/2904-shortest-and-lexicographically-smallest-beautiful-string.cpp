class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        vector<string> temp;
        int n = s.size(); 
        for(int i=0;i<n;i++){
           int count = 0; 
           string ans = ""; 
           int j = i;
           while(j<n && count<k){
             if(s[j] == '1') count++; 
             ans+= s[j]; 
             j++;
           }
           if(count == k){
             temp.push_back(ans); 
           }else continue;
        }
   vector<pair<string, int>> str; 
   for(int i=0;i<temp.size(); i++){
     str.push_back({temp[i], temp[i].size()}); 
   }
      sort(str.begin(), str.end(), [](const pair<string, int> &a, const pair<string, int> &b){
         if(a.second != b.second){
          return   a.second < b.second; 
         }else  return a.first < b.first; 
      });

  if(str.empty()) return "";  
    return str[0].first; 
    }
};
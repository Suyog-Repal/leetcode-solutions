class Solution {
public:
    string removeOccurrences(string s, string part) {
      
      while(s.find(part) != string::npos){
        int idx = s.find(part); 
        int n = s.size(); 
        s = s.substr(0, idx) + s.substr(idx + part.size(), n-(part.size() +idx));
          
      }
      return s; 
    }
};
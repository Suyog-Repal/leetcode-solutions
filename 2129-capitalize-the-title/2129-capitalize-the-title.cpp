class Solution {
public:
    string capitalizeTitle(string title) {
        stringstream ss(title);
        string word; 
        string ans="";
        vector<string> result; 
        while(ss >> word){
          if(word.size()<=2){
            for(char c: word){
                ans += tolower(c);
            }
          }else{
            ans += toupper(word[0]); 
            for(int i=1;i<word.size(); i++){
                ans+=tolower(word[i]);
            }
          }
          result.push_back(ans); 
          ans.clear();
        }
       string str =""; 
       for(string s: result){
           str+= s + ' ';
       }
       str.pop_back(); 
       return str;
    }
};
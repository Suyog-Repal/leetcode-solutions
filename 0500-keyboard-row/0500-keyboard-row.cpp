class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string one = "qwertyuiop";
        string two = "asdfghjkl"; 
        string three = "zxcvbnm";
    vector<string> temp = words;
        int n = words.size();
    for(string &p: temp){
        for(char &c: p){
          c = tolower(c);
        }
    }
    vector<string> result; 
     for(int i=0;i<n;i++){
         bool rowone = true;
        bool rowtwo = true;
        bool rowthree = true;
         for(char c: temp[i]){
            if(one.find(c) == string::npos) rowone = false; 
            if(two.find(c) == string::npos) rowtwo = false; 
            if(three.find(c) == string::npos) rowthree = false; 
         }
         if(rowone || rowtwo || rowthree){
            result.push_back(words[i]);
         }
     }
     return result; 
    }
};
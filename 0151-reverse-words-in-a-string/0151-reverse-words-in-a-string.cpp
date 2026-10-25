class Solution {
public:
    string reverseWords(string s) {
        string result = ""; 
        stringstream ss(s); 
        string word; 
        vector<string> temp; 
        while(ss >> word){
            temp.push_back(word); 
        }
        reverse(temp.begin(), temp.end()); 
        for(string x: temp){
            result += x + " ";  
        }
        result.pop_back(); 
        return result; 
    }
};
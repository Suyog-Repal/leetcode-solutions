class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result = ""; 
        int n = word1.size(); 
        int m = word2.size(); 
        for(int i=0; i<n+m; i++){
           if(i<n) result+= word1[i]; 
           if(i<m) result+=word2[i]; 
        }
        cout << result << '\n'; 
        return result; 
    }
};
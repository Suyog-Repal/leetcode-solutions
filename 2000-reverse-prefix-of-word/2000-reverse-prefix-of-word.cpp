class Solution {
public:
    string reversePrefix(string word, char ch) {
        int t = word.find(ch); 
        string s = word.substr(0, t+1); 
        reverse(s.begin(), s.end()); 
        string ans = s + word.substr(t+1, word.size()); 
        cout << t << endl; 
        return ans; 
    }
};
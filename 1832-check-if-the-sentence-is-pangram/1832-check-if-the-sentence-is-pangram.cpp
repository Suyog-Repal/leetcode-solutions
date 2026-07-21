class Solution {
public:
    bool checkIfPangram(string sentence) {
        string word =""; 
        for(char c: sentence){
            word += tolower(c); 
        }
        unordered_map<char, int> freq; 
        for(char c: word) freq[c]++; 
        if(freq.size() == 26){
            return true; 
        }
        return false; 
    }
};
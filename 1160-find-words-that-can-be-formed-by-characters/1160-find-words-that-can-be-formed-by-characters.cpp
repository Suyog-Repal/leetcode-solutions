class Solution {
public:
    bool isgood(string x, string chars){
        unordered_map<char, int> freq_x; 
        unordered_map<char, int> freq_chars; 
        for(char ch: chars) freq_chars[ch]++; 
        for(char ch: x) freq_x[ch]++; 
        for(char ch : x){
            if(freq_chars[ch] < freq_x[ch]){
                return false; 
            }
        }
        return true; 
    }
    int countCharacters(vector<string>& words, string chars) {
        int sum = 0; 
        for(string s: words){
           if(isgood(s, chars)){
            sum += s.size(); 
           }
        }
        return sum; 
    }
};
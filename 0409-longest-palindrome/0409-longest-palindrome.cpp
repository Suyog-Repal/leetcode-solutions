class Solution {
public:
    int longestPalindrome(string s) {
        if(s.size() == 1) return 1; 
        unordered_map<char, int> freq; 
        for(char c: s) freq[c]++; 
        int len = 0; 
        for(auto &p : freq){
           if(p.second%2==0){
             len+=p.second; 
           }else{
             len += (p.second/2)*2; 
           }
        }
        for(auto &p: freq){
            if(p.second%2==1){
                len+=1; 
                break; 
            }
        }
        return len;
    }
};
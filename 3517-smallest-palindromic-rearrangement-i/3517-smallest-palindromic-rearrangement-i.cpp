class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.size(); 
        if(n==1) return s; 
        map<char, int> freq; 
        for(char c: s) freq[c]++; 
        int count = 0; 
        string left="", right="", middle ="";
        for(auto &p: freq){
           count = 0; 
           if(p.second%2==1) middle +=p.first; 
          for(int i=0;i<p.second/2; i++){
               left+=p.first;
           }  
        }
         right = left; 
         reverse(right.begin(), right.end()); 
       string ans = left+middle+right;
        return ans; 
    }
};
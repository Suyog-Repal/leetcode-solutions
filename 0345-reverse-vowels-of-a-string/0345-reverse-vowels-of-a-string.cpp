class Solution {
public:
    string reverseVowels(string s) {
        vector<char> a; 
        int n = s.size(); 
        for(char c: s){
            char d = tolower(c); 
            if(d== 'i'|| d=='a' || d== 'e'|| d=='o' || d == 'u'){
                a.push_back(c); 
            }
        }
        reverse(a.begin(), a.end());
        int k =0;
        for(int i=0; i<n;i++){
            
            if(tolower(s[i]) == 'i'|| tolower(s[i])=='a' || tolower(s[i]) == 'e'|| tolower(s[i])=='o' || tolower(s[i]) == 'u'){
                s[i] = a[k];
                k++;
            }
        }
        return s; 
    }
};
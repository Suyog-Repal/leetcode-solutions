class Solution {
public:
    string freqAlphabets(string s) {
        unordered_map<string, char> mp; 
        int n = s.size();
        for(int i=0;i<26;i++){
          mp[to_string(i+1)] = 'a'+i;
        }
        string ans ="";
        for(int i=0;i<s.size(); i++){
            string c; 
            if(i+2<n && s[i+2] == '#'){
                c = s.substr(i, 2);
                ans+= mp[c];
                i +=2; 
            }else ans += mp[string(1, s[i])];
        }
       return ans; 
    }
};
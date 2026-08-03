class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
      
        stringstream ss(s1); 
        string word;
        unordered_map<string, int> freq;
        while(ss >> word){
           freq[word]++; 
        }
        stringstream st(s2); 
        string words; 
        while(st >> words){
           freq[words]++;
        }
        vector<string>uncommon;
        for(auto &p: freq){
            if(p.second ==1){
                uncommon.push_back(p.first);
            }
        }
        return uncommon;
    }
};
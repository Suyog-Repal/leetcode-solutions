class Solution {
public:
    bool isCircularSentence(string sentence) {
        stringstream ss(sentence); 
        string word; 
        vector<string> words; 
        while(ss >> word){
          words.push_back(word); 
        }
        if(words.size() == 1){
            if(words[0].front() == words[0].back()){
                return true; 
            }
        }
        int count = 0; 
        if(words[0].front() == words[words.size()-1].back()){
                count++; 
            }
        for(int i = 0; i<words.size()-1; i++){
            
            if(words[i].back() == words[i+1].front()){
                count++;
            }
        }
        if(count == words.size()){
            return true; 
        }
        return false; 
    }
};
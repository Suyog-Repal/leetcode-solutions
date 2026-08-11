class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int n = words.size(); 
        int count = 0;
        for(int i=0; i<n;i++){
            string x = words[i]; 
            reverse(x.begin(), x.end());
            for(int j = i+1; j<n;j++){
                if(x == words[j]){
                    count++;
                }
            }
        }
        return count; 
    }
};
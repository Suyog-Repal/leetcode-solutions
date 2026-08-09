class Solution {
public:
    bool isPrefixAndSuffix(string str1, string str2){
        bool prefix = false, suffix = false;
       if(str2.find(str1) == 0){
        prefix = true;
       }
       reverse(str1.begin(), str1.end());
       reverse(str2.begin(), str2.end());
        if(str2.find(str1) == 0){
        suffix = true;
       }
       if(suffix && prefix) return true;
       return false; 
    }
    int countPrefixSuffixPairs(vector<string>& words) {
        int n = words.size();
        int count =0;
        for(int i=0;i<n;i++){
            for(int j =i+1;j<n; j++){
                if(i!=j && isPrefixAndSuffix(words[i], words[j])) count++;
            }
        }
        cout << count << endl;
        return count;
    }
};
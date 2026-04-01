class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size(); 
        unordered_map<int, int> freq; 
        int ans = 0; 
        int l = 0; 
        int distinct = 0; 
        for(int r = 0; r<n; r++){
            if(freq[fruits[r]] == 0) distinct++; 
            freq[fruits[r]]++; 
            while(distinct > 2){
                freq[fruits[l]]--; 
                if(freq[fruits[l]] == 0) distinct--; 
                l++; 
            }
            ans = max(ans, r-l+1); 
        }
        return ans; 
    }
};
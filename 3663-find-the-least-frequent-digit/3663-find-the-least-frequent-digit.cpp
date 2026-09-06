class Solution {
public:
    int getLeastFrequentDigit(int n) {
        int mini = 1e7; 
        unordered_map<int, int> freq; 
        while(n){
            int digit = n%10; 
            freq[digit]++; 
            n/=10; 
        }
        int result = 1000; 
        for(auto &p: freq){
            if(p.second < mini){
                mini = p.second; 
            }
        }
        
        for(auto &p:freq){
            if(mini == p.second){
                result = min(result, p.first); 
            }
        }
        return result; 
    }
};
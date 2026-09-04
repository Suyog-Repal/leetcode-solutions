class Solution {
public:
    int digitFrequencyScore(int n) {
        int sum = 0; 
        unordered_map<int, int> freq; 
        int x = n;
        while(x){
            int digit = x%10; 
            freq[digit]++; 
            x/=10;
        }
        for(auto &p: freq){
            sum += p.first*p.second;
        }
        return sum;
    }
};
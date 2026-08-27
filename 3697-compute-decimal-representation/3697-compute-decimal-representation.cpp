class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int> result; 
        long long count = 1; 
        while(n){
            int digit = n%10; 
           if(count*digit !=0) result.push_back(count*digit);
           count*=10;
           n/=10;
        }
        reverse(result.begin(), result.end()); 
        return result; 
    }
};
class Solution {
public:
    int kbase(int n, int k){
        int sum = 0; 
        while(n){
            sum += n%k; 
            n = n/k; 
        }
        
        return sum;
    }
    int sumBase(int n, int k) {
       return kbase(n, k); 
    }
};
class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> result; 
        int carry = 0; 
        int i = num.size()-1;
        while(i>=0 || k>0 || carry > 0){
            int digit = k%10; 
            int sum = digit + carry; 
            if(i>=0) sum += num[i--];
            result.push_back(sum%10); 
            carry = sum/10; 
            k = k/10; 
        }
        reverse(result.begin(), result.end()); 
        return result; 
    }
};
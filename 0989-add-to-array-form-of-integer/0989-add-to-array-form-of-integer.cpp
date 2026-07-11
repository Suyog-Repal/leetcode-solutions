class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> result; 
        int n = num.size(); 
        string ans = to_string(k); 
        int carry = 0;
        for(int i = n-1; i>=0; i--){
            int digit = 0;
           if(!ans.empty()){
               digit = ans.back() - '0';
               ans.pop_back();
           } 
            int sum = num[i] + digit + carry; 
           result.push_back(sum%10);
            carry = sum/10; 
        }
        while(!ans.empty()){
             int digit = ans.back() - '0'; 
             ans.pop_back(); 
             int sum = digit + carry; 
             result.push_back(sum%10); 
             carry = sum/10;
        }
        if(carry > 0) result.push_back(carry);
        reverse(result.begin(), result.end());
            return result;
    }
};
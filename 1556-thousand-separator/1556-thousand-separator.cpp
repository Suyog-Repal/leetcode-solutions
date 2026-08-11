class Solution {
public:
    string thousandSeparator(int n) {
        string ans = to_string(n); 
        int x = ans.size();
        if(x<=3) return ans; 
        reverse(ans.begin(), ans.end()); 
        string result =""; 
        string temp = "";
        for(int i = 0; i<x;i++){
            result += ans[i]; 
            temp+= ans[i];
            if(temp.size()%3==0){
                result+=".";
            }
        }
        if(result.back()=='.')
        result.pop_back();
        reverse(result.begin(), result.end()); 
        //cout << result << endl;
        return result; 
    }
};
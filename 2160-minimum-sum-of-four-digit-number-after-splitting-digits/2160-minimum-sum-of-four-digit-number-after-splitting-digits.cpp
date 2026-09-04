class Solution {
public:
    int minimumSum(int num) {
        int mini = 1e9; 
        string s = to_string(num); 
        int n = s.size();
        sort(s.begin(), s.end());
        do{
            for(int i=0; i<n-1;i++){
            string x = s.substr(0, i+1); 
            string y = s.substr(i+1, n-i-1);
           // sort(x.begin(), x.end()); 
           //sort(y.begin(),y.end());
            int xx = stoi(x); 
            int yy = stoi(y); 
           int  sum = xx+yy; 
            mini = min(mini, sum);
        }
        }while(next_permutation(s.begin(), s.end()));
        return mini;
    }
};
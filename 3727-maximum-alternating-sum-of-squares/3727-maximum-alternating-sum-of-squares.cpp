class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        for(int &x: nums){
            x = abs(x); 
        }
        sort(nums.begin(), nums.end());
        if (n == 1) {
            return nums[0] * nums[0];
        }
        long long sum = 0;
        vector<int> temp1;
        vector<int> temp2;
        int x = n / 2;
        for (int i = 0; i < x; i++) {
            temp1.push_back(nums[i]);
        }
        for (int i = x; i < n; i++) {
            temp2.push_back(nums[i]);
        }
        vector<int> store;
        int i = 0, j = 0;
        while (i < temp1.size() || j < temp2.size()) {
            if (j < temp2.size()) {
                store.push_back(temp2[j]);
                j++;
            }
            if (i < temp1.size()) {
                store.push_back(temp1[i]);
                i++;
            }
        }
        // reverse(store.begin(), store.end());

        /*   while(next_permutation(nums.begin(), nums.end())){
              long long sum = 0;
                    for(int i=0; i<n; i+=2){
            if(i<n)  sum+= nums[i]*nums[i];
          }
          for(int i= 1; i<n; i+=2){
            if(i<n)  sum-= nums[i]*nums[i];
          }
          maxi = max(maxi, sum);
           }*/
        for (int x : store)
            cout << x << '\n';
        for (int p = 1; p < n; p += 2) {
            sum += abs(1LL * store[p] * store[p] -
                       1LL * store[p - 1] * store[p - 1]);
        }
        if (n % 2 != 0) {
            sum += 1LL * store[n - 1] * store[n - 1];
        }
        return sum;
    }
};
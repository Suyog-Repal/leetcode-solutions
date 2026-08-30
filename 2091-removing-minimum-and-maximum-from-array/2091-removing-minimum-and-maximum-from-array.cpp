class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int minleft = 0; 
        int minright = 0; 
        int minnum = *min_element(nums.begin(), nums.end()); 
        int maxnum = *max_element(nums.begin(), nums.end()); 
        int maxindex = -1, minindex = -1;
        int n = nums.size();
        if(n==1 || n==2) return n; 
        for(int i=0;i<n;i++){
            if(maxnum==nums[i]){
                maxindex = i;
                break;
            } 
        }
        for(int i=0;i<n;i++){
          if(nums[i]==minnum){
            minindex=i;
            break;
          }
        }
        int x = 0, y = 0, z=0;
        if(minindex>maxindex){
          x = maxindex+1+n-minindex;
          y = minindex+1;
          z = n-maxindex;
        }else{
          x = minindex+1+n-maxindex;
          y = maxindex+1;
          z = n-minindex;
        } 
        return min({x, y, z});
    }
};
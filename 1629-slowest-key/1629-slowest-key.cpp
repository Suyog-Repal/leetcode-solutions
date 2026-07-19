class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int n = releaseTimes.size();
        char ans = keysPressed[0];
        int maxi = releaseTimes[0];
        for(int i =1; i<n; i++){
            int duration = releaseTimes[i]-releaseTimes[i-1];
            if( duration >maxi){
              maxi = releaseTimes[i] - releaseTimes[i-1]; 
              ans = keysPressed[i]; 
            }else if(maxi == duration){
                ans = max(ans, keysPressed[i]); 
            }
        }
        return ans; 
    }
};
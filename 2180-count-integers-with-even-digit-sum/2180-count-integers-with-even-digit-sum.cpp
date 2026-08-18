class Solution {
public:
    bool digitsumeven(int n){
        int sum = 0;
        while(n){
            int digit = n%10;
            sum += digit; 
            n/=10;
        }
        if(sum%2==0) return true;
        return false; 
    }
    int countEven(int num) {
        int count = 0;
        for(int i=1;i<=num;i++){
            if(digitsumeven(i)) count++;
        }
        return count; 
    }
};
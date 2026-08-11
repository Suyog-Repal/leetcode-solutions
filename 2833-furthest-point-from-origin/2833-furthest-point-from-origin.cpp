class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
      int n =moves.size(); 
      if(n == 1 )return 1;
      string first = "";
      string second = "";
      for(char c: moves){
        if(c == '_'){
         first += 'L';
         second += 'R';
        } 
        else{
           first += c; 
           second +=c;
        } 
      }
      int count =0;
      for(int i=0;i<n;i++){
        if(first[i] == 'L'){
            count++;
        }else count--;
      }
    int ans = 0;
         
      int count2=0;
      for(int i=0; i<n;i++){
        if(second[i]=='R'){
            count2++;
        }else count2--;
      } 
      ans = max(abs(count2), abs(count));
      return ans; 
    }
};
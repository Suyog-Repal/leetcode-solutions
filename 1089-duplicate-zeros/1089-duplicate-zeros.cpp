class Solution {
public:
    void duplicateZeros(vector<int>& arr) { 
        
       int n = arr.size();
       vector<int> temp;
       int i = 0; 
       while(i<n){
        if(temp.size() == n) break; 
         if(arr[i] !=0) temp.push_back(arr[i]); 
         else{
            temp.push_back(0);
            if(temp.size()<n)  temp.push_back(0); 
         }
         i++;
       }
    //   while(temp.size()>n){
   //      temp.pop_back();
    //   }
       arr = temp;
    }
};
class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        if(arr.size() ==1) return arr[0]; 
        vector<string> temp; 
        map<string, int> freq; 
        for(string s: arr){
            freq[s]++; 
        } 
       for(string s: arr){
        bool found = false; 
           for(auto &p: freq){
            if(s == p.first && p.second == 1){
                found = true; 
                break; 
            }
           }
            if(found) temp.push_back(s);  
       }
       if(temp.size()>1) return temp[k-1]; 
       return "";
    }
};
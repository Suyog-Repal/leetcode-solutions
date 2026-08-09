class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int mini = 1e7;
       for(int i=0;i<list1.size();i++){
        for(int j = 0;j<list2.size(); j++){
           if(list1[i] == list2[j]){
            mini = min(mini, i+j); 
           }
        }
       }
       vector<string> result; 
       for(int i =0;i<list1.size();i++){
        for(int j=0;j<list2.size(); j++){
            if(i+j == mini && list1[i] == list2[j]){
                result.push_back(list1[i]); 
            }
        }
       }
       return result; 
    }
};
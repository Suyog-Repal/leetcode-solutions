class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int>pq; 
        int m =matrix.size(); 
        int n = matrix[0].size(); 
        for(auto &rows: matrix){
            for(int x: rows){
                if(pq.size()<k){
                    pq.push(x); 
                }else if(x<pq.top()){
                    pq.pop(); 
                    pq.push(x); 
                }
            }
        }
        return pq.top();
    }
};
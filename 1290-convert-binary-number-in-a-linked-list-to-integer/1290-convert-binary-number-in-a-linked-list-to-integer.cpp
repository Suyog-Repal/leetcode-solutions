/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
         ListNode* curr = head; 
          int x = 0; 
          while(curr){
            x++; 
            curr= curr->next; 
          }
          int ans = 0; 
          curr = head; 
          while(curr != NULL && x >=0){
             x--;
            ans += (curr->val)*(1 << x);
            curr=  curr->next;  
          }
          return ans; 
    }
};
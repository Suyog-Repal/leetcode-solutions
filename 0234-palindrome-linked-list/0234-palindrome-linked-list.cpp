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
    bool isPalindrome(ListNode* head) {
        // first find the middle of the linked list
        ListNode* slow = head; 
        ListNode* fast = head; 
        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next; 
            fast = fast->next->next; 
        }
       
        // reverse the right half of the list 
        ListNode* prev = NULL; 
        ListNode* curr = slow; 
        while(curr){
            ListNode* next = curr->next; 
            curr->next = prev; 
            prev = curr; 
            curr = next; 
        }
        // compare and get answer
        ListNode* left = head; 
        ListNode* right  = prev; 
        while(right){
            if(right->val != left->val) return false; 
            right = right->next; 
            left = left->next; 
        }
        return true; 
    }
};
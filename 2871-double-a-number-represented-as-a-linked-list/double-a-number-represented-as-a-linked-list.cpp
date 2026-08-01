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
     ListNode* reverseLL( ListNode* head){
        ListNode* curr = head;
        ListNode* pre = nullptr;

        while( curr != nullptr){
             ListNode* temp = curr->next;
             curr->next = pre;
             pre = curr;
             curr = temp;
        }

        return pre;
     }
public:
    ListNode* doubleIt(ListNode* head) {
      ListNode* nhead = reverseLL(head);

      ListNode*dummy = new ListNode(-1);
      ListNode* ans = dummy ;

      int carry = 0; 

      while(nhead != nullptr){
        int sum = nhead->val + nhead->val + carry;

        int d = sum % 10;
        carry = sum/10;

        ListNode* temp = new ListNode(d);
        dummy->next = temp;
        dummy = dummy->next;
        nhead = nhead->next;
      }
      if(carry > 0 ){
        ListNode* temp = new ListNode(carry);
        dummy->next = temp;
      }

      ans = reverseLL(ans->next);

      return ans ;
        
    }
};
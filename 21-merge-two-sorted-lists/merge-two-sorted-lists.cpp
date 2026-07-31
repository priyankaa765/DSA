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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(-1);
        ListNode* tail = &dummy; // use a pointer to track the current node

        ListNode* ptr1 = list1;
        ListNode* ptr2 = list2;

        while(ptr1 != nullptr && ptr2 != nullptr){
            if(ptr1->val < ptr2->val){
                tail->next = ptr1;
                ptr1 = ptr1->next;
            }else{
                tail->next = ptr2;
                ptr2 = ptr2->next;
            }

            tail = tail->next; //move the tail forward
        }

        if(ptr1 == nullptr){
            tail->next = ptr2;
        }else{
            tail->next = ptr1;
        }
        
        return dummy.next;
    }
};
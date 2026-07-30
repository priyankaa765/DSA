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
        stack<int> st;

        ListNode* ptr = head ;

        while(ptr != nullptr){
            st.push(ptr->val);
            ptr = ptr->next;
        }

        ListNode* ptr2 = head;

        while(ptr2 != nullptr){
            int val1 = ptr2->val;
            int val2 = st.top();
            st.pop();

            if(val1 != val2){
                return false;
            }
            ptr2 = ptr2->next;
        }
        return true;
        
    }
};
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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    public:
    ListNode* middleNode(ListNode* head ){
        if(head == nullptr){
            return nullptr;
        }

        ListNode* fast = head ;
        ListNode* slow = head ;
        ListNode* pre = slow;

        while(fast != nullptr && fast->next != nullptr){
            pre = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        pre->next = nullptr;
        return slow;
    }
public:
    TreeNode* sortedListToBST(ListNode* head) {
      if(head == nullptr){
        return nullptr;
      }else if(head->next == nullptr){
        TreeNode* root = new TreeNode(head->val);
        return root; 
      }
      ListNode* mid = middleNode(head);

      TreeNode* root = new TreeNode(mid->val);

      root->left = sortedListToBST(head);
      root->right = sortedListToBST(mid->next);

      return root;
    }
};
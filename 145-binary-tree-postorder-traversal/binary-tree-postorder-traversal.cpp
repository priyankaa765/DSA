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
    vector<int> postorderTraversal(TreeNode* root) {
      vector<int> list ;
      helper(root , list);
      return list;
    }

    public:
    void helper(TreeNode* root , vector<int>& list){
        if(root == nullptr){
            return ; // void helper function return empty 
        }

        helper(root->left , list); // call the helper to put a bar on left with list
        helper(root->right , list); // right with list

        list.push_back(root->val); // process current node
    }
};
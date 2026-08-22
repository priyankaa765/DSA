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
    bool isValidBST(TreeNode* root) {
      return helper(root , LLONG_MIN , LLONG_MAX);  
    }
    public:
     bool helper(TreeNode* root , long min , long max){
        if(root == nullptr){
            return true;
        }

        if(root->val <= min || root->val >= max ){
            return false;
        }

        bool leftAns = helper(root->left , min , root->val);
        bool rightAns = helper(root->right , root->val , max);

        return leftAns && rightAns ;

    }
};
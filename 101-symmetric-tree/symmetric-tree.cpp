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
    bool helper(TreeNode* root1 , TreeNode* root2){
        if(root1 == nullptr || root2 == nullptr ){
            return root1 == root2 ;
        }
        if(root1->val == root2->val){
            bool ans1 = helper(root1->left , root2->right );
            bool ans2 = helper(root1->right , root2->left);
            return ans1 && ans2 ;
        }else{
            return false;
        }
    }
public:
    bool isSymmetric(TreeNode* root) {
      if(root == nullptr){
        return true;
      }
      return helper(root->left , root->right);
    }
};
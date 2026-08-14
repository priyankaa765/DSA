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
    private:
    int count = 0;
    int  result = -1 ;

    void inorder(TreeNode* root , int k){
        if(root == nullptr || count >= k ){
            return ;
        }

        // 1. visit left subtree
        inorder(root->left , k);

        //2. visit current node
        count++;
        if(count == k){
            result = root->val;
            return ; // stop early once kth term found
        }
        //3. visit right subtree
        inorder(root->right,k);

    }

public:
    int kthSmallest(TreeNode* root, int k) {
       inorder(root,k);
       return result; 
    }
};
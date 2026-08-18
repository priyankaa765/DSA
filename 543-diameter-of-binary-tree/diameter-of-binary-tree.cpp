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
    int dia = 0 ;

    public:
    int height(TreeNode* root){
        if(root == nullptr){
            return 0 ;
        }
        int lh = height(root->left);
        int rh = height(root->right);

        //currNode diameter = lh+rh
        dia = max(lh+rh ,dia);

        return max(lh , rh)+ 1;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == nullptr){
            return 0 ;
        }
        int h = height(root);

        return dia;        
    }
};
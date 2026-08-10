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
    int countNodes(TreeNode* root) {
       if(root == nullptr){
        return 0;
       } 
        int leftans = 0 ;
        TreeNode* leftNode = root;
        while(leftNode != nullptr){
            leftans++;
            leftNode = leftNode->left;
        }

        int rightans = 0 ;
        TreeNode* rightNode = root;
        while(rightNode != 0){
            rightans++;
            rightNode = rightNode->right; 
        }

        if(leftans == rightans){
            return (1<< leftans) - 1;
        }

        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};
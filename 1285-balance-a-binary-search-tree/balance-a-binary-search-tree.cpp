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
    void inorder(TreeNode* root , vector<int>& list){
        if(root == nullptr){
            return ;
        }

        inorder(root->left ,list);
        list.push_back(root->val);
        inorder(root->right , list);
    }

     TreeNode* BSTMaker(vector<int>& list, int start , int end){
        if(start > end){
            return nullptr;
        }
        int mid = start +(end - start) /2 ; 
        TreeNode* root = new TreeNode(list[mid]);

        root->left = BSTMaker(list, start , mid - 1);
        root->right = BSTMaker(list , mid + 1, end);

        return root;
     }

     public:
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> list;
        inorder(root , list);
        return BSTMaker(list , 0 , list.size()-1);
    }
};
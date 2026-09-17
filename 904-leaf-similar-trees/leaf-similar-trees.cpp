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
    void checkLeaf(TreeNode* root , vector<int>& data){
        if(!root) return ;

        if(!root->left && !root->right){
            data.push_back(root->val);
            return ;
        }
        if(root->left)checkLeaf(root->left,data);
        if(root->right)checkLeaf(root->right,data);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> data1;
        vector<int> data2;

        checkLeaf(root1,data1);
        checkLeaf(root2,data2);

       return data1 == data2;

        }
    };
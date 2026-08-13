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
    vector<string> binaryTreePaths(TreeNode* root) {
       vector<string> ans;
       if(root == nullptr){
        return ans;
       }else if(root->left == nullptr && root->right == nullptr){
        ans.push_back(to_string(root->val));
        return ans;
       }

       vector<string> leftAns = binaryTreePaths(root->left);
       vector<string> rightAns =binaryTreePaths(root->right);

       for(const string& str : leftAns){
        ans.push_back(to_string(root->val) + "->" + str);
       }
       for(const string& str : rightAns){
        ans.push_back(to_string(root->val) + "->" + str);
       }

       return ans ;
    }
};
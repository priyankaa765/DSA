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
    void pathcount(TreeNode* root, int targetSum, int &count, vector<int> &addThese){
        if(!root)return;

        addThese.push_back(root->val);
        pathcount(root->left, targetSum, count, addThese);
        pathcount(root->right, targetSum, count, addThese);

        long long sum = 0;

        for(int i = addThese.size()-1; i >= 0;i--){
            sum = sum + addThese[i];

            if(sum == targetSum)count++;
        }
        addThese.pop_back();
    }
    int pathSum(TreeNode* root, int targetSum) {
        int count = 0 ;

        vector<int> addThese;
        pathcount(root,targetSum, count, addThese);

        return count;
        
    }
};
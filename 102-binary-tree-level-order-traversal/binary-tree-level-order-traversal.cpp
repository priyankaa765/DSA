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
    vector<vector<int>> levelOrder(TreeNode* root) {
      vector<vector<int>> ans ;
      vector<vector<int>> currAns;

      if(root == nullptr){
        return ans ;
      }

      queue<TreeNode*> q;
      q.push(root);

      while(q.size() > 0 ){
        int levelSize = q.size();
        vector<int> currAns ;

        for(int i = 0 ; i < levelSize ; i++){
            TreeNode* currNode = q.front();
            q.pop();

            currAns.push_back(currNode->val);
        
        // push leftchild befor right child for standard left to right transversal
        if(currNode->left != nullptr){
            q.push(currNode->left);
        }
        if(currNode->right != nullptr){
            q.push(currNode->right);
        }
      }
      ans.push_back(currAns);
      }
      return ans ; 
    }
};
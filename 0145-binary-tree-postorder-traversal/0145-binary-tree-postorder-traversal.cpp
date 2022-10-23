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
    // Helping function : 
        void traversal(TreeNode* root,vector<int> &ans)
        {
            
            if(root==nullptr){return;}
           
            traversal((*root).left,ans);
            traversal((*root).right,ans);
             ans.push_back((*root).val);
            
        }
    
        vector<int> postorderTraversal(TreeNode* root) 
        {
        vector<int>ans;
        traversal(root,ans);
        return ans;
    }
       
};
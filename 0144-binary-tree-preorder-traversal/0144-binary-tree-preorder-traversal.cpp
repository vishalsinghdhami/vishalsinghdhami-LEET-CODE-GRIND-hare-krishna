
class Solution {
public:
    void maerabhai(TreeNode* root,vector<int>&ans)
    {
        if(root==NULL){
            return;
        }
        ans.push_back(root->val);
        maerabhai(root->left,ans);
        maerabhai(root->right,ans);
//return ans;
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        maerabhai(root,ans);
        return ans;
    }
};
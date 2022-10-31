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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>result;
        if (!root) return result;
        queue<TreeNode*>q;
   q.push(root);
   q.push(NULL);
   double sum=0,x=0;
        while(!q.empty())
        {  TreeNode* first = q.front();
            if(first==NULL)
            { q.pop();
              result.push_back(sum/x);
              x=0;sum=0; 
           if (q.size() > 0) {
                    q.push(NULL);
                }
            }
            else{
                sum=sum+first->val;
                x++;
                q.pop();
                if(first->right){q.push(first->right);}
                if(first->left){q.push(first->left);}
            }
        }
    return result;
    }
};
// class Solution {
// public:
//     vector<double> averageOfLevels(TreeNode* root) {
//         vector<double>result;
//         if (!root) return result;
//         queue<TreeNode*>q;
//    q.push(root);
//    q.push(NULL);
//    double sum=0,x=0;
//         while(!q.empty())
//         {  TreeNode* first = q.front();
//             if(first==NULL)
//             { q.pop();
//               result.push_back(sum/x);
//               x=0;sum=0; 
//            if (q.size() > 0) {
//                     q.push(NULL);
//                 }
//             }
//             else{
//                 sum=sum+first->val;
//                 x++;
//                 q.pop();
//                 if(first->right){q.push(first->right);}
//                 if(first->left){q.push(first->left);}
//             }
//         }
//     return result;
//     }
// };
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        queue<TreeNode*> q;
        q.push(root);
        
        // while there are nodes remaining to be visited
        while(!q.empty()){
            double temp = q.size();
            double sum = 0;
            // iterating each level of binary tree
            for(int i = 0; i < temp; i++){
                auto tt = q.front();
                q.pop();
                sum += (tt->val);
				// check for not NULL and pushing into queue.
                if(tt->left){
                    q.push(tt->left);
                }
                if(tt->right){
                    q.push(tt->right);
                }
            }
            ans.push_back(sum/ temp);
        }
        return ans;
    }
};
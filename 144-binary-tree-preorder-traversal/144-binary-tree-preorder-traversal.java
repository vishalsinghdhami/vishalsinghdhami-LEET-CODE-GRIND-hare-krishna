/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    
    // Helping function : 
        public void traversal(TreeNode root,List<Integer> ans)
        {
            
            if(root==null){return;}
            ans.add(root.val);
            traversal(root.left,ans);
            traversal(root.right,ans);
            
        }
    
    public List<Integer> preorderTraversal(TreeNode root) 
    {
        List<Integer> ans =new ArrayList<>();
        //traversal(root,ans);
       // return ans;
        if(root==null)
        {
            return ans;
        }
        
        Stack<TreeNode>st=new Stack<>();
        st.push(root);
        while(st.size()>0)
        {
            TreeNode node=st.pop();
            ans.add(node.val);
            if(node.right!=null)
            {
                st.push(node.right);
            }
            if(node.left!=null)
            {
                st.push(node.left);
            }
        }
        
        
        
        return ans;
    }
        
        
        
    }

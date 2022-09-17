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
   
            // Helping function recursive: 
        public void traversal(TreeNode root,List<Integer> ans)
        {
            
            if(root==null){return;}
           
            traversal(root.left,ans);
            ans.add(root.val);
            traversal(root.right,ans);
            
        }
    public List<Integer> inorderTraversal(TreeNode root) 
         {
        List<Integer> ans =new ArrayList<>();
  //for recursive next 2 lines
        // traversal(root,ans);
        //return ans;
        
        //ITERATIVE CODE

            Stack<TreeNode>st=new Stack<>();
        while(true)
        {
            if(root!=null)
            {
                st.push(root);
                root=root.left;
            }
            else{
                if(st.size()==0)
                {
                    break;
                }
            root=st.pop();
                ans.add(root.val);
                root=root.right;
                
            }
            
    }
    return ans;    
        
        
        
    }

        
}
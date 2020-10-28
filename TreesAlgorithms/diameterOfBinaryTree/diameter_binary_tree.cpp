
// https://leetcode.com/problems/diameter-of-binary-tree/

class Solution {
public:
    int d=0;
    int height(TreeNode* curr_node)
    {
        if(curr_node ==NULL)
            return 0;
        int lh = height(curr_node ->left);
        int rh = height(curr_node ->right);
        
        d = max(d , lh+rh); //calculate diameter across each node as root and update if it is max.
        
        return max(lh+1,rh+1); //return max height
        
    }
    int diameterOfBinaryTree(TreeNode* root) 
    {
        
        height(root);
        return d;
        
    }
};
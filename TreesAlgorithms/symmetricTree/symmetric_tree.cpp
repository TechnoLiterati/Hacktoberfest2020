// https://leetcode.com/problems/symmetric-tree/

class Solution {
public:
    bool check(TreeNode *t1 , TreeNode *t2)
    {
        if(t1==NULL && t2==NULL)
            return true;
        
        // t1 && t2 to disacrd where one is null and another is not null(both null handled above)
        // value of both nodes should be same
        // left subtree of left tree(t1) and right subtree of right tree(t2) have to be mirror images
        // right subtree of left tree(t1) and left subtree of right tree(t2) have to be mirror images 
        if(t1&&t2 && t1->val==t2->val && check(t1->left , t2->right) && check(t1->right , t2->left))
            return true;
        
        //if neither of above conditions is true then t1 and t22 are not mirror images
        return false;
            
    }
    bool isSymmetric(TreeNode* root) 
    {
        TreeNode *t1=root , *t2=root;
        bool ans = check(t1,t2);
        return ans;
    }
};
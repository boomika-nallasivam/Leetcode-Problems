class Solution {
public:
    TreeNode* root;
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        dfs(original, cloned, target);
        return root;
    }
    
    void dfs(TreeNode* original, TreeNode* cloned, TreeNode* target)
    {
        if(original==NULL)
            return;
        if(original==target)
        {
            root=cloned;
            return;
        }
        dfs(original->left, cloned->left, target);
        dfs(original->right, cloned->right, target);
    } 
};

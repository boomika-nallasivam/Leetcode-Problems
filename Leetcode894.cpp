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
    vector<TreeNode*> allPossibleFBT(int n) {
        if(n%2==0) return {};
        
        vector<vector<TreeNode*>> dp(n+1);
        dp[1].push_back(new TreeNode(0));
        for(int cnt=3;cnt<=n;cnt+=2) {
            for(int i=1;i<cnt-1;i+=2) {
                int j=cnt-1-i;
                for(auto left:dp[i]) {
                    for(auto right: dp[j]) {
                        TreeNode* root=new TreeNode(0,left,right);
                        dp[cnt].push_back(root);
                    }
                }
            }
        }
        return dp[n];
    }
};

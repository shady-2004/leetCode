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
    void rec(TreeNode* root,int &leftMost,int &level,int cur){
        if(!root)return ;
        if(level<cur){
            leftMost=root->val;
            level++;
        }
        rec(root->left,leftMost,level,cur+1);
        rec(root->right,leftMost,level,cur+1);
    }

public:
    int findBottomLeftValue(TreeNode* root) {
        int leftMost;
        int level=-1;

        rec(root,leftMost,level,0);
        return leftMost;
    }
};
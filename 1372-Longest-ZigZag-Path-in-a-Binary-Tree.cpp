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
    int helper(TreeNode* root,int cur=0,int prev=-1){
            if(!root)return cur;
        int res=0;
        if(prev==-1)res=max(helper(root->left,cur+1,0),helper(root->right,cur+1,1));
        else if(prev==0)res=max(helper(root->right,cur+1,1),helper(root->left,1,0));
        else if(prev==1)res=max(helper(root->left,cur+1,0),helper(root->right,1,1));
        return res;
    }
public:
    int longestZigZag(TreeNode* root) {
        return helper(root)-1;
    }
};
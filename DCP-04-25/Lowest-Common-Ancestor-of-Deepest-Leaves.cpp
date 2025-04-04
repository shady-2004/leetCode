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
    int depth(TreeNode* root){
        if(!root) return 0;
        return max(depth(root->left),depth(root->right))+1;
    }
    TreeNode*rec(TreeNode* root,int depth,int cur=1){
        if(!root)return NULL;
        if(cur==depth)return root;
        TreeNode*left=rec(root->left,depth,cur+1);
        TreeNode*right=rec(root->right,depth,cur+1);
        if(left&&right)return root;
        return left?left:right;
    }
public:
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        int dep=depth(root);
        cout<<dep<<endl;
        return rec(root,dep);
    }
};
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
    void rec(TreeNode* root, int val, int depth,int cur){
        if(!root)return ;
        if(cur==depth-1){
            TreeNode*left=root->left;
            TreeNode*right=root->right;
            root->left=new TreeNode(val,left,NULL);
            root->right=new TreeNode(val,NULL,right);
            return;
        }
        else {
            rec(root->left,val,depth,cur+1);
            rec(root->right,val,depth,cur+1);
        }
    }
public:
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1){
            return new TreeNode(val,root,NULL);
        }
        rec(root,val,depth,1);
        return root;
    }
};
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
    int findBottomLeftValue(TreeNode* root) {
        int leftMost=root->val;
        queue<TreeNode*>q;

        q.push(root);
        while(!q.empty()){
            int s=q.size();
            bool first=0;
            while(s--){
                TreeNode*cur=q.front();
                q.pop();
                if(cur->left){
                    if(!first){
                        leftMost=cur->left->val;
                        first=true;
                    }
                    q.push(cur->left);
                }
                if(cur->right){
                    if(!first){
                        leftMost=cur->right->val;
                        first=true;
                    }
                    q.push(cur->right);

                }
            }
        }
        return leftMost;
    }
};
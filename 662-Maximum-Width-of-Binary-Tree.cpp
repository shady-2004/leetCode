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
    int widthOfBinaryTree(TreeNode* root) {
        unsigned long long maxW=1;
        queue<pair<TreeNode*,unsigned long long>>q;
        q.push({root,0});
        while(!q.empty()){
            int s=q.size();
            unsigned long long first=-1, last=-1;
            while(s--){
                auto cur=q.front();
                q.pop();
                if(cur.first->left){
                    q.push({cur.first->left,cur.second*2+1});
                    if(first==-1)first=cur.second*2+1;
                    last=cur.second*2+1;
                }

                 if(cur.first->right){
                    q.push({cur.first->right,cur.second*2+2});
                    if(first==-1)first=cur.second*2+2;
                    last=cur.second*2+2;
                }

            }
            maxW=max(maxW,(last-first)+1);
        }
        return maxW;
    }
};
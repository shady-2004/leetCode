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
class FindElements {
    unordered_set<int>s;
public:
    FindElements(TreeNode* root) {
        recover(root,0);
    }
    
    bool find(int target) {
        return s.find(target)!=s.end();
    }
private:
    void recover(TreeNode*root,int val=0){
        if(!root)return;
        s.insert(val);
        recover(root->left,val*2+1);
        recover(root->right,val*2+2);
    }
  
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */
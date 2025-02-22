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
    int num(string&traversal,int&i,string&number){
          while(i<traversal.size()&&traversal[i]!='-')
           {
            number+=traversal[i];
            i++;
           }
    return stoi(number);
    }
public:
    TreeNode* recoverFromPreorder(string traversal) {
        
        string number;
        int i=0;
        

        TreeNode*root=new TreeNode(num(traversal,i,number));
        number="";

        stack<pair<TreeNode*,int>>nodes;
        nodes.push({root,0});
        TreeNode*temp;

       for(i;i<traversal.size();i++){
        int d=0;

           while(traversal[i]=='-'){
            i++;
            d++;
           }
         
        temp=new TreeNode(num(traversal,i,number));

           while(nodes.top().second!=d-1){
            nodes.pop();
           }
            
            if(nodes.top().first->left){
               nodes.top().first->right=temp;
               nodes.pop();
               }
            else nodes.top().first->left=temp;
        
        nodes.push({temp,d});
        number="";
        i--;
       }
       return root;
    }
};
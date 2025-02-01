/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:

    // ListNode*rev(ListNode*root,ListNode*&nh){
    //     if(!root) return NULL;
    //     if(!root->next){
    //         nh=root;
    //         return root;}

    //     ListNode*next=rev(root->next,nh);
    //     next->next=root;
    //     root->next=NULL;
    //     return root;
    // }
    

    ListNode* reverseList(ListNode* head,ListNode*prev=NULL) {
        if(!head)return head;
        ListNode*next=head->next;
        head->next=prev;
        if(!next)return head; 
        return reverseList(next,head);
    }
};

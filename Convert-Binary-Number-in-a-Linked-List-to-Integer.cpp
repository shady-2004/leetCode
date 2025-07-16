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
    int rec(ListNode*head ,int & k ){
        if( !head ) return 0;
        int y = rec(head->next,k);        
        int x = head->val *k;
        k*=2;
        return x + y ;
    }
public:
    int getDecimalValue(ListNode* head) {
        int k=1;
        return rec(head , k);
    }
};
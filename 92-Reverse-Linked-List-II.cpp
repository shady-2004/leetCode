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
    ListNode* reverseList(ListNode* head,ListNode*prev=NULL) {
        if(!head)return head;
        ListNode*next=head->next;
        head->next=prev;
        if(!next)return head; 
        return reverseList(next,head);
    }
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode*begin=NULL;
        ListNode*prevBegin=NULL;
        ListNode*temp=head;
        int i=1;
        while(temp){
            if(i==left)begin=temp;
            if(i==right){
                ListNode*next=temp->next;
                temp->next=NULL;
                reverseList(begin);
                if(prevBegin){
                    prevBegin->next=temp;
                    begin->next=next;
                }
                else{
                    head=temp;
                    begin->next=next;       
                }
                break;
            }

            if(!begin)
            prevBegin=temp;
            temp=temp->next;
            i++;
        }
        return head;
    }
};
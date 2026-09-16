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
    void reorderList(ListNode* head) {
        if (head==NULL || head->next==NULL){
            return;
        }
        //find middle:
        ListNode *slow=head;
        ListNode *fast=head;
    while(fast->next !=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    //Reverse the second half
    ListNode *temp=slow->next;
    slow->next=NULL;
    ListNode*prev=NULL;
    while(temp!=NULL){
        ListNode *nn=temp->next;
        temp->next=prev;
        prev=temp;
        temp=nn;
    }
    //merge:
    ListNode *first=head;
    ListNode*second=prev;
    while(second!=NULL&&first!=NULL){
        ListNode *nn1=first->next;
        ListNode *nn2=second->next;
        first->next=second;
        second->next=nn1;
        first=nn1;
        second=nn2;
    }
    }
};
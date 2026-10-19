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
        if(head==nullptr || head->next==nullptr){
            return;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* first=head;
        while(fast!=nullptr && fast->next!=nullptr){
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode* temp=slow->next;
        slow->next=nullptr;
        ListNode* prev= nullptr;
        while(temp!=nullptr){
            ListNode* next1=temp->next;
            temp->next=prev;
            prev=temp;
            temp=next1;
        }
        ListNode* second=prev;
        ListNode* dummy=new ListNode(0);
        ListNode* ans=dummy;
        while(second!=nullptr){
             ans->next=first;
             first=first->next;
             ans=ans->next;
             ans->next=second;
             second=second->next;
             ans=ans->next;
        }
        if(first!=nullptr){
            ans->next=first;
        }
    head=dummy->next;
    delete dummy;
    }
};

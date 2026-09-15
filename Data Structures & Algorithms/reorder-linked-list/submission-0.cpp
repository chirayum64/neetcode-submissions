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
        ListNode*temp=head;
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* temp2=slow->next;
        slow->next=nullptr;
        ListNode*prev=nullptr;
        while(temp2!=nullptr){
            ListNode* next1=temp2->next;
            temp2->next=prev;
             prev=temp2;
            temp2=next1;
        }
        ListNode* first=head;
        ListNode* second=prev;
        while(second!=nullptr){
            ListNode* next2=first->next;
            ListNode* next3=second->next;
            first->next=second;
            second->next=next2;
            first=next2;
            second=next3;
        }      
    }
};

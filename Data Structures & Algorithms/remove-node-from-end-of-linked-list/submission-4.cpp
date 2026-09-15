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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       ListNode* dummy=new ListNode(0);
       dummy->next=head;
       ListNode* first=dummy;
       ListNode* second=dummy;
       ListNode* prev=nullptr;
       if(head->next==nullptr && n==1){
           return nullptr;
       }
       while(n!=0){
           first=first->next;
           n--;
       }
       while(first!=nullptr){
         first=first->next;
         prev=second;
         second=second->next;
       }
       ListNode* temp=second;
       prev->next=temp->next;
       delete temp;
       ListNode* ans = dummy->next;
       delete dummy;

       return ans;
    }
};

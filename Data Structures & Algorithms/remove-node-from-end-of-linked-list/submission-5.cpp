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
        int count=0;
        ListNode* temp=head;
        ListNode* temp2=head;
        ListNode* prev=nullptr;
        while(temp!=nullptr){
            count++;
            temp=temp->next;
        }
        int rem=count-n;
        if(rem==0){
            head=head->next;
            return head;
        }
        else{
            while(rem>0){
                prev=temp2;
                temp2=temp2->next;
                rem--;
            }
            prev->next=temp2->next;
            delete temp2;
        }
    return head;
    }
};

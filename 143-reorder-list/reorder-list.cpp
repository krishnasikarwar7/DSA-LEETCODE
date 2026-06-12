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
        ListNode* slow=head;
        ListNode* fast=head;

        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }

        ListNode* prev=NULL;
        while(slow!=NULL)
        {
            ListNode* tmp=slow->next;
            slow->next=prev;
            prev=slow;
            slow=tmp;
        }

        ListNode* first=head;
        ListNode* second=prev;

        while(second->next!=NULL)
        {
            ListNode* tmp1=first->next;
            ListNode* tmp2=second->next;

            first->next=second;
            second->next=tmp1;

            first=tmp1;
            second=tmp2;
        }

    }
};
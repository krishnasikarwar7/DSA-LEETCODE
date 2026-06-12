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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy=new ListNode(-1);
        ListNode* curr=dummy;

        ListNode* tmp1=l1;
        ListNode* tmp2=l2;
        int carry=0;
        while(tmp1!=NULL || tmp2!=NULL)
        {
            int sum=carry;
            if(tmp1) sum+=tmp1->val;
            if(tmp2) sum+=tmp2->val;
            ListNode* newNode=new ListNode(sum%10);
            carry=sum/10;

            curr->next=newNode;
            curr=newNode;

            if(tmp1) tmp1=tmp1->next;
            if(tmp2) tmp2=tmp2->next;
        }
        if(carry)
        {
            ListNode* newNode=new ListNode(carry);
            curr->next=newNode;
        }

        return dummy->next;
    }
};
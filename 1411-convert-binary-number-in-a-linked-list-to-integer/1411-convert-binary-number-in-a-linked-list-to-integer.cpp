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
    int getDecimalValue(ListNode* head) {
          struct ListNode *temp;
    temp=head;
    int l=0;
    while(temp!=NULL)
    {
        l++;
        temp=temp->next;
    }
    int b=0;
    temp=head;
    while(temp!=NULL)
    {
        b=b+temp->val*pow(2,l-1);
        l--;
        temp=temp->next;
    }
    return b;
    }
};
/*
Given a linked list, remove the nth node from the end of list and return its head.

For example,

   Given linked list: 1->2->3->4->5, and n = 2.

   After removing the second node from the end, the linked list becomes 1->2->3->5.
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
 class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fPtr=head;
        ListNode* sPtr=head;
        if (head == NULL) return head;
        while(n)
        {
            fPtr=fPtr->next;
            n--;
        }
        
        if (fPtr == NULL)
        {
            ListNode* p = head;
            head = head->next;
            delete p;
            return head;
        }
        
        while (fPtr->next != NULL)
        {
            fPtr=fPtr->next;
            sPtr=sPtr->next;
        }
        
        ListNode* p = sPtr->next;
        sPtr->next = p->next;
        delete p;

        return head;
    }
};

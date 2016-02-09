/*
Merge two sorted linked lists and return it as a new list. The new list should be made by splicing together the nodes of the first two lists.
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* l;
        if ( l1 == NULL)
            return l2;
        else if ( l2 == NULL)
            return l1;
        if (l1->val <= l2->val )
        {
            l=l1;
            l->next=mergeTwoLists(l1->next,l2);
        }
        else 
        {
            l=l2;
            l->next=mergeTwoLists(l1,l2->next);
        }
        return l;
    }
};

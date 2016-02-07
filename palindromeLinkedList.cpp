/*
Given a singly linked list, determine if it is a palindrome.

Follow up:
Could you do it in O(n) time and O(1) space?
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
    bool isPalindrome(ListNode* head) {
        vector<int> s;
        ListNode* temp=head;
        while ( temp != NULL)
        {
            s.push_back(temp->val);
            temp=temp->next;
        }
        int i = s.size()-1;
        temp=head;
        for (; i >= 0 && temp != NULL ; --i )
        {
            if (s[i] != temp->val)
            return false;
            temp=temp->next;
        }
        
        return true;
         
        
    }
};

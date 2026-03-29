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
        ListNode* fast = head->next;
        ListNode* slow = head;

        //we want slow to stop at the last node of first half
        while (fast != nullptr && fast->next != nullptr) {
            fast = fast->next->next;
            slow = slow->next;
        }

        //second -> head of second half
        ListNode* second = slow->next;
        ListNode* prev = slow->next = nullptr; //slow->next breaks the first half off the list

        //reverse the second half
        while (second != nullptr) {
            ListNode* temp = second->next;
            second->next = prev;
            prev = second;
            second = temp;
        }
        
        //first -> head of first half
        ListNode* first = head;
        second = prev; //prev is head of reversed list

        //merging the lists
        while (second != nullptr) {
            ListNode* temp1 = first->next;
            ListNode* temp2 = second->next;
            first->next = second;
            second->next = temp1;
            first = temp1;
            second = temp2;
        };
    }
};

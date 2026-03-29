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
    
    //1. brute force -> interate through list, find length N then iterate again to reach (N-n)th node
    //2. recursion -> ??
    //3. two pointers at gap of n (most optimized)
    //   we're using dummy to handle the case where head gets deleted
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0, head);
        ListNode* forward = head;
        ListNode* back = dummy;

        while (n > 0) {
            forward = forward->next;
            n--;
        }

        while (forward != nullptr) {
            back = back->next;
            forward = forward->next;
        }

        ListNode* temp = back->next;
        back->next = back->next->next;
        delete temp;

        return dummy->next;
    }
};

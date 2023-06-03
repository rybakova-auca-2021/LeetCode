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
    ListNode* reverseList(ListNode* head) {
    ListNode* tail = NULL;

    //Example: 1 -> 2;

    while(head != NULL) { //we go through each node
        ListNode* next = head->next; //declare next node
        head->next = tail; // 1 is a head node, 2 is a head->next and tail
        tail = head; //our tail node is now a head node (2)
        head = next; //current node is the next node
    }
    return tail; //return last node
    }
};
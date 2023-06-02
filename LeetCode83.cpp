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
    ListNode* deleteDuplicates(ListNode* head) {
        set<int> v;

        while(head != NULL) {
            v.insert(head->val);
            head = head->next;
        }

        ListNode* newHead = NULL;
        for(auto it = v.rbegin(); it != v.rend(); it++) {
            ListNode* cur = new ListNode;
            cur->val = *it;
            cur->next = newHead;
            newHead = cur;
        }
        return newHead;
    }
};
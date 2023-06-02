class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> v;

        while(list1 != NULL) {
            v.push_back(list1->val);
            list1 = list1->next;
        }
        while(list2 != NULL) {
            v.push_back(list2->val);
            list2 = list2->next;
        }
        sort(v.begin(), v.end());

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

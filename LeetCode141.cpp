class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode *> visited; //set to store all visited nodes
        while (true) 
        {
            if (head == nullptr) //if head is a last elemement of the list, then it is not visited and we print false
            {
                return false;
            }
            auto result = visited.insert(head); //every element inserted in the list
            if (result.second == false){ //if we want to add element that is already in the list 
                return true; // then we print true
            }
            head = head->next; // if conditions are not met, go to next node
        }    
    }
};
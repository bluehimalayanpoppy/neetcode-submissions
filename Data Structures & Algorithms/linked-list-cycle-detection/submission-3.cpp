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
    bool hasCycle(ListNode* head) {
        //tortoise + hare 


        //pointer one
        //both start at same place
        ListNode* slow = head; 
        ListNode* fast = head; 
        ListNode *traverse = head;

        while (slow != nullptr && fast != nullptr && fast -> next != nullptr)
        {
            //move slow one step and move fast
            //two steps
            slow = slow -> next; 
            fast = fast -> next -> next; 
            //check if they are pointing to the same node


            //if fast reaches null, no cycle exists 
            if (fast == nullptr)
            {
                return false; 
            }
            if (slow == fast)
            {
                return true; 
            }
        }
        return false;

    }
};

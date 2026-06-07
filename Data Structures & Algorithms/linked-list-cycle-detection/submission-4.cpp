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
        //hash set 
        unordered_set <ListNode*> order; 
        ListNode *traverse = head;
        for  (traverse; traverse != nullptr; traverse = traverse -> next) 
        {
            //check first
            // if traverse is alr in the set it is a cycle 
             if (order.contains(traverse))
             {
                return true; 
             }
            //set.insert(node)
            order.insert(traverse); 
             
        }

        return false; 
    }
    };


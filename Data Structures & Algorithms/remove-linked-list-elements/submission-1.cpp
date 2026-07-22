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
    ListNode* removeElements(ListNode* head, int val) {
    
    //from leetcode
    if (head == nullptr)
    {
        return 0; 
    }
    else 
    {
        ListNode* node = head;
        ListNode* prev = nullptr; 
        while (node != nullptr)
        {
             if (node -> val == val)
            {
            
            
              if (prev == nullptr)
               {
                //before prev -> next = head;
                head = head -> next; 
               }
            
               if ( prev != nullptr)
               {
               prev -> next = node -> next;  //just added
               }
               node = node -> next;
               //don't change prev when deleting a node
            }
            else
            {
                prev = node; 
                node = node -> next; 
            }
        }
                                                                                     
    return head; 
    }
    }
};
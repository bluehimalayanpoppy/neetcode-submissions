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

        if (head == nullptr) 
        {
            return 0;
        }

        ListNode* node = head -> next; 
        //prev = 0
        ListNode* prev =  head; 
        prev -> next = nullptr;
        ListNode* dummy = nullptr; 

        for (; node != nullptr; node = dummy)
        {
            if (node -> next == nullptr)
            {
                head = node;
                
            }
            
            //dummy is 2     
            dummy = node -> next;

            //1 -> 0      //
            node  -> next = prev; 
            //0 -> nullptr 
            //1 is new prev 
            
            prev = node; 
           
            //2 
            

        }
        return head;
        
    }
};

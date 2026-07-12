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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        

        //1,2,3,4,5,6,7 n = 3 
        //remove 5 
        //1,2,3,4,6,7
        ListNode *temp; 
        ListNode* node = head; 
        int i = 0;
        int length = 0;
        for (; node != nullptr; node = node -> next)
        {
            length++; 
        }
        //reset node
        node = head; 
        if (n == length)
        {
            head = head -> next; 
        }
        for (; node != nullptr; node = node -> next)
        {
            i++; 
            //if we want to remove head 
             if (i == length - n) 
            { 
                //5
                temp = node -> next; 
                node -> next = node -> next -> next; 
            }

        }
        return head;

    }
};

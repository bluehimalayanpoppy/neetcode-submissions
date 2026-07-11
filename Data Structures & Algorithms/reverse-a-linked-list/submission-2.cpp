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
            return nullptr; 
        
        } else 
        { 
        //Node *node = new Node; 
        //node = 1 
        ListNode *node = head -> next; 
        //prev = 0 
        ListNode *prev = head; 
        ListNode *tempNext; 
        prev -> next = nullptr; 
        for (; node != nullptr; node = tempNext) 
        { //tail becomes the head 
            if ( (node -> next) == nullptr)
            { 
                head = node;
            } 
            //tempNext is 2 
            tempNext = node -> next; 
            // 1 -> 0
             node -> next = prev; 
             // 0 is new node 
             prev = node; 
        } 
        
        } return head;
        }
    };

//0 1 2 3 
// node = 2
// prev = 1
//tempnext = 2
// prev -> next   0 null
// 2 1 0
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
        }
        else
        {
            //Node *node = new Node; 
            ListNode *node = head -> next;
            ListNode *prev = head; 
            ListNode *tempNext;
            prev -> next = nullptr; 
            for (; node != nullptr; node = tempNext)
            { 
                    //tail becomes the head
                    if ( (node -> next) == nullptr)
                    {
                        head = node; 
                    }
                    //tempNext is 2 
                    tempNext = node -> next;
                    node -> next = prev; 
                    prev = node;
            
                }
            }
            return head; 
        }
    };

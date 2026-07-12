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
    void reorderList(ListNode* head) {
        //use example (0,1,2,3,4,5,6)
   
        
        //find middle half of the list
        ListNode* slow = head; 
        ListNode* fast = head;
        ListNode* second; 
        
        while (fast != nullptr && fast -> next != nullptr && fast -> next -> next != nullptr)
        {
            slow = slow -> next; 
            fast = fast -> next -> next; 
        }
        //split lists 
        //second = 3 
        // 3 -> next = nullptr
        second = slow -> next; 
        slow -> next = nullptr;



        //if second exists
        ListNode* node;
        ListNode* prev;
       
        if (second != nullptr)
        {   
            node = second -> next; 
            prev = second; 
            prev -> next = nullptr;
            
            ListNode* tempnext;
            for (node; node != nullptr; node = tempnext)
            {
                //second is head
                tempnext = node -> next; 
                node -> next = prev; 
                prev = node;
            }
            //head (second) is last node
            second = prev;
        }
     
        
        //first list is first half
        ListNode* first = head;
    
    
        ListNode* temp;
        ListNode* temp2;
        while (second != nullptr && first != nullptr)
        {
            temp = first -> next;
            temp2 = second -> next;
            first -> next = second; 
            second -> next = temp; 
            first = temp; 
            second = temp2;
        }

        
    }
};

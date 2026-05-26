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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode *firstList = list1; 
        ListNode *secondList = list2; 
   
        ListNode *combine = new ListNode; 
        ListNode *pointertoHead = combine; 

        
        while (firstList != nullptr && secondList != nullptr)
        {
            //if val is smaller, advance pointer
            if (firstList -> val < secondList -> val)
            {
                //node after empty node 
                combine -> next = firstList;
                combine = combine -> next; 
                firstList = firstList -> next;
            }
            else
            {
                combine -> next = secondList;
                combine = combine -> next; 
                secondList = secondList -> next;
            }
            
        }
        //whicheve one has nodes left, attach
        if (firstList != nullptr)
        {  combine -> next = firstList;
           return pointertoHead -> next;
        }
        if (secondList != nullptr)
        {  combine -> next = secondList;
            return pointertoHead -> next;
        }
        return pointertoHead -> next;
        
       
    }
};

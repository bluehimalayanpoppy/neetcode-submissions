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
        

        ListNode* head = new ListNode; 
        ListNode* combine = head; 
        while (list1 != nullptr && list2 != nullptr)
        {
            
            if (list1 -> val < list2 -> val)
            {
                combine -> next = list1; 
                combine = combine -> next;  
                list1 = list1 -> next; 
            } 
            else
            {
                combine -> next = list2; 
                combine = combine -> next; 
                list2 = list2 -> next; 

            }
        }


        //connect whatevers left at the end 
        if (list1 != nullptr)
        {
            combine -> next = list1; 
        }
        else if (list2 != nullptr)
        {
            combine -> next = list2; 
        }
        return head -> next; 

    }
};

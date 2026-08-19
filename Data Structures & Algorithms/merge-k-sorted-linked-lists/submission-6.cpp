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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
    
        if (lists.size() ==0)
        {
            return 0;
        }
        //pairs 
        int originalList = 1; 
        //one round is multiple iterations 
        // [A], [B], [C], [D], [E], [F]
        // one round: i =0,2,4 
        //i = 0,  i = 2, i = 4
        //[A B], [C D], [E F]
        //i = 0, i = 4 (no second list, leave EF alone)
        //[A B, C D], [E F]
        for (int originalList =1; originalList < lists.size(); originalList*=2)
        {
            int i = 0; 
            //while there are more pairs for one round
            while (i + originalList < lists.size())
            {   //merge list 1, find index of list 2 with i + listSize
                lists[i] = mergeTwoLists(lists[i], lists[i+originalList]);
                i+= originalList* 2; 
                 //resulting list doubles size
                //originalList is size in terms of how many original lists
            }

        }
        return lists[0];
    }

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

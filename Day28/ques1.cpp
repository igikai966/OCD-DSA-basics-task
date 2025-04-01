//Question 1 - Linked List cycle
//link-  https://leetcode.com/problems/linked-list-cycle/
//code-
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 class Solution {
    public:
        bool hasCycle(ListNode *head) {
            //edge case
            if(head==NULL)return false;
            ListNode *slow=head,*fast=head;
            while(fast && fast->next){
                slow=slow->next;
                fast=fast->next->next;
                
                if(fast == slow)return true;
            }
            return false;
    
        }
    };

//Question 2- Palindrome Linked list
//link-https://leetcode.com/problems/palindrome-linked-list/
// code-
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
        bool isPalindrome(ListNode* head) {
            if(!head || !head->next) return true; //Empty or single element list
            ListNode * slow=head;
            ListNode *fast=head;
            stack<int>st;
    
            // Push first half into stack and then compare with rest of the list
            while( fast && fast->next){
                st.push(slow->val);
                slow=slow->next;
                fast =fast->next->next;
            }
    
            //If the length is odd, skip the middle element
            if (fast) slow=slow->next;
    
            //Compare the second half with stack
            while(slow){
                if(st.top()!=slow->val) return false;
                st.pop();
                slow=slow->next;
            }
            return true;
            
        }
    };
//Question1- Delete Node in a Linked List
//link-https://leetcode.com/problems/delete-node-in-a-linked-list/
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
        void deleteNode(ListNode* node) {
            if(node ==nullptr ||node->next ==nullptr)return;
    
            node->val = node->next->val;
            node->next =node->next->next;
            
        }
    };
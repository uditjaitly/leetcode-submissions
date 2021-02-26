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
    ListNode* head1;
    void recursive(ListNode* node){
        if(node==NULL){
            return;
        }
        recursive(node->next);
        if(node->next==NULL){
            head1=node;
            return;
        }
        node->next->next=node;
        node->next=NULL;
        
        cout<<node->val<<" ";
    }
    
    
    
    ListNode* reverseList(ListNode* head) {
        ListNode* itr=head;
        head1=itr;
        recursive(itr);
        return head1;
    }
};
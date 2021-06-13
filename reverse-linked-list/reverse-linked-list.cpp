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
    ListNode* temp;
    void dfs(ListNode* node){
        if(node==NULL ){
            return;
        }
        if(node->next==NULL){
            temp=node;
            return;
        }
      
        dfs(node->next);
       
        node->next->next=node;
        node->next=NULL;
        cout<<node->val<<" ";
        
        
    }
    
    
    ListNode* reverseList(ListNode* head) {
        dfs(head);
        return temp;
    }
};
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

struct compare{
    bool operator()(ListNode* a, ListNode* b){
    return a->val>b->val;
}

};


class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*,vector<ListNode*>,compare> pq;
        
        for(int i=0;i!=lists.size();i++){
            ListNode* temp=lists[i];
            while(temp!=NULL){
                pq.push(temp);
                temp=temp->next;
            }
        }
        if(pq.size()==0){
            return NULL;
        }
        ListNode* head=new ListNode(0);
        head->next=pq.top();
        ListNode* node=head;
        while(pq.size()>0){
            node->next=new ListNode(pq.top()->val);
            pq.pop();
            node=node->next;
    
            
            
            
            
      
           
           
        }
        return head->next;
    
        
    }
   
};
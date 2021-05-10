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
    int getDecimalValue(ListNode* head) {
        
        ListNode* temp=head;
        int size=0;
        int res=0;
        while(temp!=NULL){
            size++;
            temp=temp->next;
        }
        ListNode* temp2=head;
        while(temp2!=NULL){
            size--;
            res+=temp2->val*pow(2,size);
            
            
            
            temp2=temp2->next;
            
        }
        return res;
    }
};
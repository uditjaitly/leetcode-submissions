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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* t1=l1;
        ListNode* t2=l2;
        ListNode* r=new ListNode(0);
        ListNode* head=r;
        int carry=0;
        int sum;
        int x,y;
        while(t1!=NULL || t2!=NULL){
            if(t1==NULL){
                x=0;
            }
            else{
                x=t1->val;
            }
            if(t2==NULL){
                y=0;
            }
            else{
                y=t2->val;
            }
            sum=carry+x+y;
            cout<<carry<<x<<y;
            carry=sum/10;
            r->next=new ListNode(sum%10);
            r=r->next;
            cout<<"here";
            if(t1!=NULL){
                t1=t1->next;
            }
            if(t2!=NULL){
                t2=t2->next;
            }
        }
        if(carry==1){
            r->next=new ListNode(carry);
        }
        return head->next;
    }
};
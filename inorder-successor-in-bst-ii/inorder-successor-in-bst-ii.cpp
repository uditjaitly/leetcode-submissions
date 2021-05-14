/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* parent;
};
*/

class Solution {
public:
    Node* min=new Node(INT_MAX);
    int self;
    
    void findInLeft(Node* node){
        if(node==NULL){
            return;
        }
        if(min->val>node->val && node->val>self){
            min=node;
        };
        findInLeft(node->left);
        
    }
    
    void findInParents(Node* node){
        if(node==NULL){
            return;
        }
        if(min->val>node->val && node->val>self){
            min=node;
        }
        findInParents(node->parent);
    }
    
    
    
    Node* inorderSuccessor(Node* node) {
        self=node->val;
        findInLeft(node->right);
        findInParents(node);
        if(min->val==INT_MAX){
            return NULL;
        }
        return min;
    }
};
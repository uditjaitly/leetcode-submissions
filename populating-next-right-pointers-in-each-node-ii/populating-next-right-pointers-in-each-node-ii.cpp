/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    void levelOrder(Node* node){
        if(node==NULL){
            return;
        }
        queue<Node*> track;
        track.push(node);
        while(track.size()>0){
            int n=track.size();
            vector<Node*> temp;
            for(int i=0;i!=n;i++){
                temp.push_back(track.front());
                if(track.front()->left!=NULL){
                    track.push(track.front()->left);
                    
                }
                if(track.front()->right!=NULL){
                    track.push(track.front()->right);
                }
                track.pop();   
            }
            
            for(int i=0;i!=temp.size()-1;i++){
                temp[i]->next=temp[i+1];
            }
       
   
            
            
   
            
            
            
        }
        
        
        
    } 
    
    
    
    Node* connect(Node* root) {
        levelOrder(root);
        return root;
    }
};
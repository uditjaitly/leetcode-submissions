/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    
    bool isSymmetric(TreeNode* root) {
        queue<TreeNode*> q;
        if(root){
            q.push(root);
        }
        while(q.size()!=0){
            int len=q.size();
            vector<int> temp;
            for(int i=0;i!=len;i++){
                
                if(q.front()!=NULL){
                    temp.push_back(q.front()->val);
                if(q.front()->left!=NULL){
                    q.push(q.front()->left);
                    
                }
                else{
                    q.push(NULL);
                }
                if(q.front()->right!=NULL){
                    q.push(q.front()->right);
                    
                }
                else{
                    q.push(NULL);
                }
                }
                else{
                    temp.push_back(999);
                }
                q.pop();
            }
            for(int i=0,j=temp.size()-1;i<j;i++,j--){
                if(temp[i]!=temp[j]){
                    return false;
                }
            }
            
        }
        return true;
        
    }
};
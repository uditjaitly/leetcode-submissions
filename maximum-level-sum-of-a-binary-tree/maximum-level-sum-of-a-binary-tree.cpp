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
    int maxLevelSum(TreeNode* root) {
        
        queue<TreeNode*> store;
        store.push(root);
        int counter=0;
        int res=-1;
        int maxm=INT_MIN;
        while(store.size()!=0){
            int l=store.size();
            int score=0;
            for(int i=0;i!=l;i++){
                TreeNode* temp=store.front();
                score=score+temp->val;
                cout<<score<<" ";
                if(temp->left!=NULL){
                    store.push(temp->left);
                }
                if(temp->right!=NULL){
                    store.push(temp->right);
                }
                store.pop();
                
            }
            cout<<"\n";
            
            counter++;
            if(score>maxm){
                maxm=score;
                res=counter;
            }
        }
        
        return res;
        
        
        
    }
};
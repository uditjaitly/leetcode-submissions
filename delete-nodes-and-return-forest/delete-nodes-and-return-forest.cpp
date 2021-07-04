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
    vector<TreeNode*> res;
    bool dfs(TreeNode* node, set<int>& store){
        
        if(node==NULL){
            return false;
        }
      
        bool isLeft=dfs(node->left,store);
        bool isRight=dfs(node->right,store);
        if(store.find(node->val)!=store.end()){
            
            if(node->left!=NULL && store.find(node->left->val)==store.end()){
                res.push_back(node->left);
            }
            if(node->right!=NULL && store.find(node->right->val)==store.end()){
                res.push_back(node->right);
            }
            return true;
        }
        
        if(isLeft==true){
            node->left=NULL;
        }
        if(isRight==true){
            node->right=NULL;
        }
        
        return false;
        
    }
    
    
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        set<int> store;
        for(int i=0;i!=to_delete.size();i++){
            store.insert(to_delete[i]);
        }
        if(store.find(root->val)==store.end()){
            res.push_back(root);
        }
        
      
        dfs(root,store);
        return res;
    }
};
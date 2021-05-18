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
    int count=0;
    void dfs(TreeNode* node,int max){
        if(node==NULL){
            return;
        }
        if(node->val>max){
            max=node->val;
        }
        dfs(node->left,max);
        dfs(node->right,max);
        
        if(node->val>=max){
            count++;
        }
        
        
        
        
    }
    
    
    
    int goodNodes(TreeNode* root) {
        dfs(root,INT_MIN);
        return count;
    }
};
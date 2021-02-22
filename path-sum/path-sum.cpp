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
    bool found=false;
    void dfs(TreeNode* node, int targetSum, int sum,int depth){
         
        if(node==NULL){
    
            return;
        }
       if(node!=NULL && node->left==NULL & node->right==NULL){
            if(sum+node->val==targetSum){
                found=true;
            }
        }
        dfs(node->left,targetSum,sum+node->val,depth+1);
        dfs(node->right,targetSum,sum+node->val,depth+1);
        
    }
    
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root){
        dfs(root,targetSum,0,1);
        }
        return found;
    }
};
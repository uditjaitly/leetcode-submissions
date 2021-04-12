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
    void dfs(TreeNode* node,vector<int> track){
        if(node==NULL){
            return;
        }
        track.push_back(node->val);
        if(*max_element(track.begin(),track.end())<=node->val){
            count++;
        }
        dfs(node->left,track);
        dfs(node->right,track);
        
        
        
    }
    
    
    int goodNodes(TreeNode* root) {
        vector<int> track;
        
        dfs(root,track);
        return count;
    }
};
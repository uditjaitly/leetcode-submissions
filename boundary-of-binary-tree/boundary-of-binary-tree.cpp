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
    vector<int> res;
    stack<int> right;
    void leafNodes(TreeNode* node){
        if(node==NULL){
            return;
        }
        if(node->left==NULL && node->right==NULL){
            res.push_back(node->val);
        }
        leafNodes(node->left);
        leafNodes(node->right);
    }
    
    
    
    void leftBoundary(TreeNode* node){
        if(node==NULL || (node->left==NULL && node->right==NULL)){
            return;
        }
        res.push_back(node->val);
        if(node->left==NULL){
            leftBoundary(node->right);
        }
        else{
            leftBoundary(node->left);
        }
        
    }
    
    void rightBoundary(TreeNode* node){
        if(node==NULL || (node->left==NULL && node->right==NULL)){
            return;
        }
        right.push(node->val);
        if(node->right==NULL){
            rightBoundary(node->left);
        }
        else{
            rightBoundary(node->right);
        }
        
    }
    
    
    vector<int> boundaryOfBinaryTree(TreeNode* root) {
        res.push_back(root->val);
        leftBoundary(root->left);
        leafNodes(root->left);
        leafNodes(root->right);
        rightBoundary(root->right);
        while(right.size()!=0){
            res.push_back(right.top());
            right.pop();
        }
        return res;
    }
};
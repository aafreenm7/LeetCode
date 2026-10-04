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
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL){
            return root;
            
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode *nn=q.front();
            q.pop();
            //swap
            TreeNode *temp=nn->left;
            nn->left=nn->right;
            nn->right=temp;
            //Add children to queue
            if(nn->left!=NULL){
                q.push(nn->left);
            }
            if(nn->right!=NULL){
                q.push(nn->right);
            }
        }
        return root;
    }
};
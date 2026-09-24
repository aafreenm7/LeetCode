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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL || q==NULL){
            return p==q;
            /*
            if p is null and q ->false
            if q is null and p->false
            p and q both are null->true
            */
        }
        int leftSameTree=isSameTree(p->left,q->left);
        int rightSameTree=isSameTree(p->right,q->right);
        return leftSameTree && rightSameTree && p->val==q->val;
    }
};
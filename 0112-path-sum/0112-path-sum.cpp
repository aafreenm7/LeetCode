
class Solution {
public:
    bool checkPath(TreeNode* root, int targetSum, int sum) {
        if (root == NULL) {
            return false;
        }

        sum = sum + root->val;

        if (root->left == NULL && root->right == NULL) {
            return sum == targetSum;
        }

        return checkPath(root->left, targetSum, sum) ||
               checkPath(root->right, targetSum, sum);
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        return checkPath(root, targetSum, 0);
    }
};
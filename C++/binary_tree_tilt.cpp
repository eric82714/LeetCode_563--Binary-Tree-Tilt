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
    int sums = 0;
    int gettilt(TreeNode* root) {
        if(!root) return 0;
        else {
            int l = 0, r = 0;
            if(root->left) l = gettilt(root->left);
            if(root->right) r = gettilt(root->right);
            sums += abs(r - l);
            return l + r + root->val;
        }
    }
    int findTilt(TreeNode* root) {
        gettilt(root);       
        return sums;
    }
};

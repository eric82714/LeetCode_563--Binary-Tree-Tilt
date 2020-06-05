/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int gettilt(struct TreeNode* root, int* sum){
    if(!root) return 0;
    else{
        int l = 0, r = 0;
        if(root->left) l = gettilt(root->left, sum);
        if(root->right) r = gettilt(root->right, sum);    
        *sum += abs(r - l);
        return l + r + root->val;    
    }
}

int findTilt(struct TreeNode* root){
    int sums = 0;
    gettilt(root, &sums);       
    return sums;
}

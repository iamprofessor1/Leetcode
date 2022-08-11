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
    bool check(TreeNode* root, long long   prev , long long  next){
        if(root == NULL)return true;
        return root->val >prev and root->val <next and check(root->left,prev,root->val)and check(root->right,root->val ,next);
        
    }
    bool isValidBST(TreeNode* root) {
        long long  prev = LLONG_MIN;
        long long next = LLONG_MAX;
        return check(root,prev,next);
        
    }
};
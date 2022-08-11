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
    bool check(TreeNode* root, long long  & prev){
        if(root == NULL)return true;
        if(check(root->left,prev) == false)return false;
        if(prev>=root->val)return false;
        prev = root->val;
        return check(root->right,prev);
    }
    bool isValidBST(TreeNode* root) {
        long long  prev = LLONG_MIN;
        return check(root,prev);
        
    }
};
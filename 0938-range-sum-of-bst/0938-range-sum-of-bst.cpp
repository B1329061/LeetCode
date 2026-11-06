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
private:
    void LVR(TreeNode* root,int low,int high,int& res){
        if(!root)return;
        LVR(root->left,low,high,res);
        if(root->val>=low && root->val<=high)res+=root->val;
        LVR(root->right,low,high,res);
    }
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        int res{0};
        LVR(root,low,high,res);
        return res;
    }
};
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
    void LVR(TreeNode* root,int& cur,bool& res){
        if(!root)return;
        LVR(root->left,cur,res);
        if(root->val!=cur)res=false;
        else cur=root->val;
        LVR(root->right,cur,res);
    }
public:
    bool isUnivalTree(TreeNode* root) {
        bool res=true;
        LVR(root,root->val,res);
        return res;
    }
};
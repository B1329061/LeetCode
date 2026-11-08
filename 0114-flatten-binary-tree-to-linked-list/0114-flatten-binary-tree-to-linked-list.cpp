class Solution {
private:
    void VLR(TreeNode* root,queue<TreeNode*>& q){
        if(!root)return;
        q.push(root);
        VLR(root->left,q);
        VLR(root->right,q);
    }
public:
    void flatten(TreeNode* root) {
        queue<TreeNode*>q;
        VLR(root,q);
        if(!q.empty())q.pop();
        while(!q.empty()){
            root->right=q.front();
            root->left=nullptr;
            q.pop();
            root=root->right;
        }
    }
};
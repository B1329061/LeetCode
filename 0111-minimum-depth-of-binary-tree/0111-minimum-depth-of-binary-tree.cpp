class Solution {
public:
    int minDepth(TreeNode* root) {
        if(!root)return 0;
        queue<TreeNode*>q;
        int curdep{1};
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;++i){
                TreeNode* cur=q.front();
                q.pop();
                if(!cur->left&&!cur->right)return curdep;
                if(cur->left)q.push(cur->left);
                if(cur->right)q.push(cur->right);
            }curdep++; 
        }return curdep;
    }
};
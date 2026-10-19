class Solution {
private:
    void VLR(TreeNode* root,vector<int>& v){
        if(!root)return ;
        v.push_back(root->val);
        VLR(root->left,v);
        VLR(root->right,v);
    }
public:
    int getMinimumDifference(TreeNode* root) {
        vector<int>v;
        VLR(root,v);
        sort(v.begin(),v.end());
        int curmin=INT_MAX;
        for(int i=0;i<v.size()-1;++i)curmin=min(curmin,(v[i+1]-v[i]));
        return curmin;
    }
};
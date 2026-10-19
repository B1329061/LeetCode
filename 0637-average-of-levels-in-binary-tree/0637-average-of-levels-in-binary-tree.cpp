class Solution {
private:
    
public:
    vector<double> averageOfLevels(TreeNode* root) {
        if(!root)return {};
        vector<vector<double>>res;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            vector<double>temp;
            int size=q.size();

            for(int i=0;i<size;++i){
                TreeNode* cur=q.front();
                q.pop();
                temp.push_back(cur->val);
                if(cur->left)q.push(cur->left);
                if(cur->right)q.push(cur->right);
            }res.push_back(temp);
        }vector<double>r;
        for(int i=0;i<res.size();++i){
            double sum=accumulate(res[i].begin(),res[i].end(),0.0)/res[i].size();
            r.push_back(sum);
        }return r;
    }
};
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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1){
            TreeNode* n= new TreeNode(val);
            n->left=root;
            return n;
        }
        queue<TreeNode*>q;

        q.push(root);

        int lay=1;

        while(!q.empty()){

            int n=q.size();

            lay++;

            for(int i=0;i<n;++i){

                TreeNode* cur=q.front();

                q.pop();

                if(lay==depth){

                    TreeNode* n=new TreeNode(val);

                    TreeNode* r=new TreeNode(val);

                        n->left=cur->left;

                        r->right=cur->right;

                        cur->left=n;

                        cur->right=r;

                }else{

                    if(cur->left)q.push(cur->left);

                    if(cur->right)q.push(cur->right);

                }

            }

        }return root;
    }
};
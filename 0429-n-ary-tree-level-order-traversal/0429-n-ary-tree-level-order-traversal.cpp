/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(!root)return {};
        vector<vector<int>>res;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            vector<int>tmp;
            for(int i{0};i<n;++i){
                Node* cur=q.front();
                q.pop();
                tmp.push_back(cur->val);
                for(auto it:cur->children){
                    q.push(it);
                }
            }res.push_back(tmp);
        }return res;
    }
};
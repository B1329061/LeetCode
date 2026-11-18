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
    int maxDepth(Node* root) {
        if(!root)return 0;
        queue<Node*>q;
        int res=0;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            res++;
            for(int i=0;i<n;++i){
                Node* cur=q.front();
                q.pop();
                for(auto it:cur->children){
                    q.push(it);
                }
            }
        }return res;
    }
};
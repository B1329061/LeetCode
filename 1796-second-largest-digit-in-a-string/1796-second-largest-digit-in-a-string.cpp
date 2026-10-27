class Solution {
public:
    int secondHighest(string s) {
        set<int>st;
        for(int i:s){
            if((i-'0'>=0&&(i-'0')<=9))st.insert(i-'0');
        }priority_queue<int>q;
        for(auto it:st){
            q.push(it);
        }if(!q.empty())q.pop();
        return (q.empty())?-1:q.top();
    }
};
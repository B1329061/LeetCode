class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int>res;
        res.reserve(2);
        int curmax=INT_MIN,idx=0;
        for(int i=0;i<mat.size();++i){
        int ct=std::count(mat[i].begin(),mat[i].end(),1);
            if(ct>curmax){
                idx=i;
                curmax=ct;
            }
        }res.push_back(idx);
        res.push_back(curmax);
        return res;
    }
};
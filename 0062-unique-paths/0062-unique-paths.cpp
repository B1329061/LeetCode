class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>>ref;
        for(int i=0;i<m;++i){
            vector<int>tmp;
            for(int j=0;j<n;++j){
                if(!i || !j)tmp.push_back(1);
                else tmp.push_back(0);
                
            }ref.push_back(tmp);
        }for(int i=1;i<ref.size();++i){
            for(int j=1;j<ref[i].size();++j){
                ref[i][j]=ref[i-1][j]+ref[i][j-1];
            }
        }return ref[m-1][n-1];
    }
};
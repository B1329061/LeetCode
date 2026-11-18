class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        if(triangle.size()==1)return triangle[0][0];
        for(int i=1;i<triangle.size();++i){
            for(int j{0};j<triangle[i].size();++j){
                if(j>0&&j<triangle[i].size()-1)triangle[i][j]=triangle[i][j]+min(triangle[i-1][j],triangle[i-1][j-1]);
                else if(!j)triangle[i][j]+=triangle[i-1][j];
                else triangle[i][j]+=triangle[i-1][j-1];
            }
        }
        int curmin{INT_MAX};
        for(int i{0};i<triangle[triangle.size()-1].size();++i){
            curmin=min(curmin,triangle[triangle.size()-1][i]);
        }return curmin;
    }
};
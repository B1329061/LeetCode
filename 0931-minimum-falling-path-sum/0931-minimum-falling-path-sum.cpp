class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int curmin=INT_MAX;
        if(matrix.size()==1){
            for(int i{0};i<matrix[0].size();++i)curmin=min(curmin,matrix[0][i]);
            goto exit;
        }
        for(int i{1};i<matrix.size();++i){
            for(int j{0};j<matrix[i].size();++j){
                if(!j)matrix[i][j]=min(matrix[i][j]+matrix[i-1][j],matrix[i][j]+matrix[i-1][j+1]);
                if(j==matrix[i].size()-1){
                    matrix[i][j]=min(matrix[i][j]+matrix[i-1][j],matrix[i][j]+matrix[i-1][j-1]);
                }if(j>0&&j<matrix[i].size()-1){
                    int left=min(matrix[i][j]+matrix[i-1][j],matrix[i][j]+matrix[i-1][j-1]);
                    int right=min(matrix[i][j]+matrix[i-1][j],matrix[i][j]+matrix[i-1][j+1]);
                    matrix[i][j]=min(left,right);
                }if(i==matrix.size()-1){
                    curmin=min(curmin,matrix[i][j]);
                }
            }
        }
        exit:
        return curmin;
    }
};
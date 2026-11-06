class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        vector<vector<long long>>ref(obstacleGrid.size()+1);
        vector<long long>padding(obstacleGrid[0].size(),0);
        ref[0].assign(padding.begin(),padding.end());
        for(int i{1};i<ref.size();++i){
            ref[i].assign(obstacleGrid[i-1].begin(),obstacleGrid[i-1].end());
            
        }
        

        for(int i{0};i<ref.size();++i){
            if(i<2)ref[i].insert(ref[i].begin(),1);
            else ref[i].insert(ref[i].begin(),0);
        }
        
        

        for(int i{1};i<ref.size();++i){
            for(int j{1};j<ref[i].size();++j){
                if(ref[i][j])ref[i][j]=0;
                else ref[i][j]=ref[i-1][j]+ref[i][j-1];
            }
        }
        
        return ref[ref.size()-1][ref[0].size()-1];
    }
};
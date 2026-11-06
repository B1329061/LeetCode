class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>lay{1};
        for(int i=1;i<=rowIndex;++i){
            lay.push_back(1);
            vector<int>temp=lay;
            for(int j=1;j<lay.size()-1;++j){
                lay[j]=temp[j]+temp[j-1];
            }
        }return lay;
    }
};
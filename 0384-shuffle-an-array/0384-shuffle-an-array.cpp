class Solution {
private:
    vector<int>ref;
    vector<int>res;

    std::mt19937 rng;
public:
    Solution(vector<int>& nums) {
        ref=nums;
        res=nums;

        std::random_device rd;
        rng = std::mt19937(rd());
    }
    
    vector<int> reset() {
        return ref;
    }
    
    int factor(int size){
        if(size<=2)return size;
        return size*factor(size-1);
    }
    vector<int> shuffle() {
        std::shuffle(res.begin(),res.end(),rng);
        return res;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */
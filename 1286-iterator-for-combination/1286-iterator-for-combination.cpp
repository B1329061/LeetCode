class CombinationIterator {
private:
    string ref;
    int len;
    vector<string>comb;
    string path="";
    int cur{0};
public:
    inline void build(vector<char>& ref,int start,string& path,vector<string>& res,int len){
        if(path.size()==len)res.push_back(path);
        for(auto it=start;it<ref.size();++it){
            path.push_back(ref[it]);
            build(ref,it+1,path,res,len);
            path.pop_back();
        }return;
    }
    vector<char> conv(string s){
        vector<char>ret;
        for(char it:s)ret.push_back(it);
        return ret;
    }
    
    CombinationIterator(string characters, int combinationLength) {
        this->ref=characters;
        this->len=combinationLength;
        vector<char>temp=conv(ref);
        build(temp,0,path,comb,len);
    }
    
    string next() {
        string ret=comb[cur];
        cur++;
        return ret;
    }
    
    bool hasNext() {
        return cur<=comb.size()-1;
    }
};

/**
 * Your CombinationIterator object will be instantiated and called as such:
 * CombinationIterator* obj = new CombinationIterator(characters, combinationLength);
 * string param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
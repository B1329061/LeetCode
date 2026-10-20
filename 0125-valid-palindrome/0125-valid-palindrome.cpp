class Solution {
public:
    bool isPalindrome(string s) {
        if(s==" ")return true;
        vector<char>v;
        for(auto c:s){
            if(c!=' '&&c!=','&&c!=':'&&c!='.'&&c!='/'&&c!='+'&&c!='-'&&c!=';'&&c!='#'&&c!='@'&&c!='!'&&c!='?'&&c!='$'&&c!='%'&&c!='^'&&c!='&'&&c!='*'&&c!='('&&c!=')'&&c!='-'&&c!='_'&&c!='='&&c!='['&&c!=']'&&c!='>'&&c!='<'&&c!='|'&&c!='"'&&c!='{'&&c!='}'&&c!='\''&&c!='\\'&&c!='`'){
                v.push_back(tolower(c));
            }
        }
        for(auto it:v)cout<<it;
        int left=0,right=v.size()-1;
        while(left<=right){
            if(v[left]!=v[right])return false;
            left++;
            right--;
        }return true;
    }
};
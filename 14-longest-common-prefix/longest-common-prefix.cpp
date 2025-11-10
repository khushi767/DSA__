class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty())return "";
        string first=strs[0];
        int maxlen=first.size();
        for(int len=maxlen;len>=0;--len){
            string candidate=first.substr(0,len);
            bool ok=true;
            for(int i=1;i<strs.size();i++){
                if(strs[i].size()<len||strs[i].compare(0,len,candidate)!=0){
                    ok=false;
                    break;
                }
            }
            if(ok)return candidate;
        }
        return "";
    }
};
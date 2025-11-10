class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        /*Time: O(S) → total number of characters in all strings (since we scan through each column across all strings).

Space: O(1) extra (only a few variables + prefix string).*/
        if(strs.empty())return "";
        int numstrings=strs.size();
        int minlength=INT_MAX;
        for(const string &s:strs){
            minlength=min(minlength,(int)s.size());
        }
        if(minlength==0)return "";

        string prefix="";
        for(int pos=0;pos<minlength;++pos){
            char currentchar=strs[0][pos];
            for(int i=1;i<numstrings;++i){
                if(strs[i][pos]!=currentchar){
                    return prefix;
                }
            }
            prefix.push_back(currentchar);
        }
        return prefix;


        /*
// Better approach, sort string comapre last and first element
//TC=O(n log n * m), SC=O(1)
if(strs.empty())return "";
sort(strs.begin(),strs.end());
string first=strs.front();
string last=strs.back();
int minlen=min(first.size(),last.size());
int i=0;
while(i<minlen && first[i]==last[i])++i;
return first.substr(0,i);*/


        /* //brute force: O(n⋅m2), SC=O(1)
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
        return "";*/
    }
};

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
// Better approach, sort string comapre last and first element
//TC=O(n log n * m), SC=O(1)
if(strs.empty())return "";
sort(strs.begin(),strs.end());
string first=strs.front();
string last=strs.back();
int minlen=min(first.size(),last.size());
int i=0;
while(i<minlen && first[i]==last[i])++i;
return first.substr(0,i);


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

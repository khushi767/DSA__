class Solution {
public:
    string baseNeg2(int n) {
    /*    if(n==0)return "0";
        string ans="";
        while(n!=0){
            int bit=n&1; //remainder 0 or 1
            ans.push_back(bit+'0');
            n=(n-bit)/-2;
        }
        reverse(ans.begin(),ans.end());
        return ans;
        */
        if(n==0)return "0";
        string ans="";
        while(n!=0){
            int rem=n%-2;
            n=n/-2;
            if(rem<0){
                rem+=2;
                n+=1;
            }
            ans.push_back(rem+'0');
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
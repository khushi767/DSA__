class Solution {
  public:
    string calculateFraction(int a, int b) {
        // Code here
        if(a==0)return "0";
        string result=(a<0)^(b<0)?"-":"";
        a=abs(a);b=abs(b);
        result+=to_string(a/b);
        int rem=a%b;
        if(rem==0)return result;
        result.append(".");
        unordered_map<int,int>mp;
        while(rem>0){
            if(mp.find(rem)!=mp.end()){
                result.insert(mp[rem],"(");
                result.append(")");
                break;
            }
            mp[rem]=result.size();
            rem=rem*10;
            result+=to_string(rem/b);
            rem=rem%b;
        }
        return result;
    }
};
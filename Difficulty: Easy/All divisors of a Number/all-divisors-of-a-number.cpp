class Solution {
  public:
    void print_divisors(int n) {
        // Code here.
     /*   vector<int>divisors;
        for(int i=1;i<=n;i++){
            if(n%i==0)
            divisors.push_back(i);
        }
        for(int i=0;i<divisors.size();i++){
            cout<<divisors[i]<<" ";
        }
        
        */ //this gives tle tc=o(n)
        
        //tc=o(sqrt(n))
        vector<int>ans;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                ans.push_back(i);
                if(i!=n/i){
                    ans.push_back(n/i);
                }
            }
        }
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
    }
};
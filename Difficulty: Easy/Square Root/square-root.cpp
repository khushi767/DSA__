class Solution {
  public:
    int floorSqrt(int n) {
        // code here
        /*
        for(int i=1;i*i<=n;i+=i){
            if(i*i)
        }
        */
        int res=1;
        while(res*res<=n){
            res++;
        }
        return res-1;
    }
};
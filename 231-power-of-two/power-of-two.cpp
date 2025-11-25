class Solution {
public:
    bool isPowerOfTwo(int n) {
        /*
        for(int i=0;i<=30;i++){ //loop runs for 31 times, TC=O(1), SC=O(1)
            int ans=pow(2,i);
            if(ans==n){
                return true;
            }
        }
        return false;*/
/*
        int ans=1;
        for(int i=0;i<=30;i++){ TC=O(1),SC=O(1)
            if(ans==n){
                return true;
            }
            if(ans<INT_MAX/2)
             ans=ans*2;
        }
        return false;*/
return n > 0 && (n & (n - 1)) == 0;


    }
};
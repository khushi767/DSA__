// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int num=n;
        int sum=0;
        while(n!=0){
           int last_dig=n%10;
            sum=sum+last_dig*last_dig*last_dig;
            n=n/10;
        }
        return sum==num?true:false;
    }
};
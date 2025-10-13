// User function Template for C++

class Solution {
  public:
  long long fact(int n){
      long long result=1;
      for(int i=2;i<=n;i++){
          result*=i;
      }
      return result;
  }
    long long nPr(int n, int r) {
        // code here
        return fact(n)/fact(n-r);
    }
};
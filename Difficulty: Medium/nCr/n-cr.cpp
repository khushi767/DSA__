class Solution {
  public:
  //Using Factorial - O(n) Time and O(1) Space
  /*
  int fact(int n){
      long long res=1;
      for(int i=2;i<=n;i++){
          res*=i;
          
      }
      return res;
  }
  */
    int nCr(int n, int r) {
      
        // code here
        /*
        Using Recursion - O(2^n) Time and O(n) Space
        if(r>n)return 0;
        if(r==0||r==n)return 1;
        return nCr(n-1,r-1)+nCr(n-1,r);
        
        */
        /*
        if(r>n){
            return 0;
            
        }
        return fact(n)/(fact(r)*fact(n-r));*/
        double sum=1;
        for(int i=1;i<=r;i++){
            sum=sum*(n-r+i)/i;
        }
        return (int)sum;
    }
};
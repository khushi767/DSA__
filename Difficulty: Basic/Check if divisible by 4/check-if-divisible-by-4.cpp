// User function template for C++
class Solution {
  public:

    int divisibleBy4(string N) {
        // Your Code Here
       /* int n=stoi(N);
        if(n%4==0)
        return 1;
        
        else
        return 0;
        */
        int n=N.length();
        if(n==0)return 0;
        if(n==1)return((N[0]-'0')%4==0);
        
        int last=N[n-1]-'0';
        int second_last=N[n-2]-'0';
        int num= ((second_last*10+last)%4==0);
        
        return (num==1);
    }
};


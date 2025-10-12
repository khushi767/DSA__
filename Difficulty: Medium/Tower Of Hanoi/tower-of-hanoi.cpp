class Solution {
  public:
    int towerOfHanoi(int n, int from, int to, int aux) {
        // code here
       if(n==0)return 0;
       int move1=towerOfHanoi(n-1,from,aux,to);
       int moves=1;
       int moves3=towerOfHanoi(n-1,aux,to,from);
       return move1+moves+moves3;
    }
};
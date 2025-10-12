class Solution {
  public:
    int etf(int n) {
        // code here
           int result = 1; 
    for (int i = 2; i < n; i++) 
        if (gcd(i, n) == 1) 
            result++; 
    return result;  
    }
};
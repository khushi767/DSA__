class Solution {
  public:
    int kthDigit(int a, int b, int k) {
        // code here
        long long num=pow(a,b);
        string s=to_string(num);
        int n=s.size();
        return s[n-k]-'0';
    }
};

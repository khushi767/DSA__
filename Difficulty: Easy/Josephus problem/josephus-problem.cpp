class Solution {
  public:
    int josephus(int n, int k) {
        // code here
if(n==1)return 1;
return (josephus(n-1,k)+k-1)%n+1;
    }
};
/*
12345
k=2
24 ==135
2415  3

N=7 k=3
1234567
36 ==>12457
3627==>145
36275=>12
362751=>2
*/
/*
        // Base case
        if (n == 1)
            return 1;

        // Recursive case:
        // (josephus(n-1, k) + k - 1) % n + 1 gives the survivor's position
        return (josephus(n - 1, k) + k - 1) % n + 1;
        
        
          int josephus(int n, int k) {
        int res = 0; // 0-based survivor index
        for (int i = 1; i <= n; i++) {
            res = (res + k) % i;
        }
        return res + 1; // Convert to 1-based index
    }
};*/
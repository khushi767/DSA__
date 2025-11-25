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

        //fastest acc to cpu
return n > 0 && (n & (n - 1)) == 0;
/*n > 0
Power of two positive hota hai (1,2,4,8,...)
(n & (n - 1)) == 0
Yeh check karta hai ki n ki binary me sirf ek hi 1 bit ho.
Power of 2 ki binary representation me exactly 1 hi set bit hota hai.
n	Binary
1	0001
2	0010
4	0100
8	1000
16	10000
Ek hi bit = 1
Baaki sab = 0
Agar number me ek hi bit 1 ho (power of two), to n − 1 karne se:
Wo 1 bit 0 ban jaati hai
Aur uske right side ke saare bits 1 ban jaate hain
Example:
n = 8 → binary = 1000
n - 1 = 7 → binary = 0111
Now AND operation: (n & (n − 1))

AND sirf tab 1 deta hai jab dono bits 1 ho.

n = 8 → 1000
n-1 = 7 → 0111

  1000
& 0111
-------
  0000   ← All zero!

👉 Agar (n & (n-1)) = 0 → power of two
👉 Agar non-zero → NOT power of two
Example 2: n = 12 (NOT power of 2)

Binary:

n     = 1100
n-1   = 1011
---------------
n&(n-1)=1000  → NOT ZERO ❌ NOT power of 2

Example 3: n = 1 → power of 2
n     = 0001
n-1   = 0000
------------
&     = 0000 ✔
*/

    }
};
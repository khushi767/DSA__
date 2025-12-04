class Solution {
public:
double power(double x,long long n){
    if(n==0)return 1;
    double half=power(x,n/2);
    if(n%2==0)return half*half;
    else return half*half*x;
    /*
    Agar power n ko half karte jao, toh multiplication kam ho jati hai → isliye fast hota hai.

Example:
To compute x^10

Normal → multiply x * x * x * … 10 times
Fast pow →
10 → half = 5
5 → half = 2
2 → half = 1
1 → half = 0
So only log₂(10) ≈ 4 levels!

🔍 Line-by-line Explanation
1. Base Case
if (n == 0) return 1;


Kisi bhi number ki power 0 always 1 hoti hai.
So recursion stops here.

2. Recursive Call
double half = power(x, n / 2);


Yeh x^(n/2) calculate karta hai.

Example: n = 10
→ call power(x, 5)
→ call power(x, 2)
→ call power(x, 1)
→ call power(x, 0)

Is tarah yeh half hota jata hai.

3. Check if n is even
if (n % 2 == 0) return half * half;


Agar n even ho:

x^n = (x^(n/2)) * (x^(n/2))
So just multiply half * half.

Example:
n = 10 → half = x⁵
Return = x⁵ * x⁵ = x¹⁰

4. If n is odd
else return half * half * x;


Odd case me formula:
x^n = (x^(n/2)) * (x^(n/2)) * x

Example: n = 5
half = x²
Return = x² * x² * x = x⁵

📌 Summary
Case	Return
n = 0	1
n even	half * half
n odd	half * half * x
⏳ Time Complexity

O(log n)
because har step me n ko 2 se divide kar rahe ho.

📦 Space Complexity

O(log n) (due to recursion stack)*/
}
    double myPow(double x, int n) {
        /*
        Brute: O(n)
        long long N=n;
        if(N<0)N=-N;//Agar exponent negative ho, example:x = 2, n = -3 To -3 ko +3 bana dete hain so that loop easily chale.
        double ans=1;
        for(long long i=0;i<N;i++){
            ans=ans*x;
        }
        return (n<0)?1.0/ans:ans;//Agar n positive tha → normal output.Agar n negative tha → answer ka reciprocal.Example:x = 2, n = -3 Brute force se ans = 8. Return:1.0 / 8 = 0.125
        */

        //optimal: using recursion
        long long N=n;
        if(N<0){
            N=-N;
            return 1.0/power(x,N);
        }
        return power(x,N);
    }
};
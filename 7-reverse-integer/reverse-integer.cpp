class Solution {
public:
    int reverse(int x) {
        long long rev=0;// use long long to detect overflow
        while(x!=0){
            int digit=x%10;
            rev=rev*10+digit;// build reversed number
            if(rev>INT_MAX||rev<INT_MIN)return 0;// check overflow for 32-bit signed int
            x=x/10;
        }
        return rev;
    }
};
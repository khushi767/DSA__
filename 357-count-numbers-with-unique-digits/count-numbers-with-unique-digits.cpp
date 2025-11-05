class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        /*
        Time O(n) — loop up to n (n ≤ 8).
Space O(1).*/
        if(n==0)return 1;
        int ans=10;// for n >= 1: count of numbers with 1 digit (0..9)
        int unique=9;// number of ways to choose first (non-zero) digit for multi-digit numbers
        int avail=9;// digits left to choose from for next positions (0..9 minus the chosen leading digit)
        for(int i=2;i<=n;i++){
            unique=unique*avail; // multiply by choices for this additional digit
            ans=ans+unique;// add counts of numbers with exactly i digits and unique digits
            --avail;// one less digit option for next digit
            if(avail<=0)break;
        }
        return ans;


    }
};
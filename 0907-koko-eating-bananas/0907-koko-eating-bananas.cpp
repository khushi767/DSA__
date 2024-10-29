// #include<bits/stdc++.h>
// class Solution {
// public:
// int findmax(vector<int>&piles){
//     return *max_element(piles.begin(),piles.end());
// }
//     int calculatetotalhours(vector<int>piles,int hourly){
// long long totalh=0;
//         int n=piles.size();
//         for(int i=0;i<n;i++){
//             totalh+=ceil((double)(piles[i])/(double)(hourly));
//         }
//         return totalh;
//     }
//     int minEatingSpeed(vector<int>& piles, int h) {
//        int maxi=findmax(piles);
//        for(int i=1;i<=maxi;i++){
//         int reqtime=calculatetotalhours(piles,i);
//         if(reqtime<=h){
//             return i;
//         }
//        }
//        return maxi;
//     }
// };

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findmax(vector<int>& piles) {
        return *max_element(piles.begin(), piles.end());
    }

    int calculatetotalhours(vector<int>& piles, int hourly) {
        long long totalh = 0;  // Use long long to avoid overflow
        int n = piles.size();
        for (int i = 0; i < n; i++) {
            totalh += ceil((double)(piles[i]) / (double)(hourly));
            if (totalh > INT_MAX) { // Optional check to save computation time if already exceeding limit
                return INT_MAX;
            }
        }
        return totalh;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1, right = findmax(piles);
        while (left < right) {
            int mid = left + (right - left) / 2;
            int reqtime = calculatetotalhours(piles, mid);
            if (reqtime <= h) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }
};

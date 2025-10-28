/*class Solution {
public:
bool canEatAll(vector<int>& piles,int h,int k){
    long long hours=0;
    for(int p:piles){
        hours+=(p+k-1)/k;
    }
    return hours<=h;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int left=1;
        int right=*max_element(piles.begin(),piles.end());
        int ans=right;
        while(left<=right){
            int mid=left+(right/left)/2;
            if(canEatAll(piles,h,mid)){
                ans=mid;
                right=mid-1;
            }else{
                left=mid+1;
            }
        }
        return ans;

        /*linear search
        Time: O(max(piles) × n) — ❌ Too slow (max(piles) ≤ 1e9), Space: O(1)
        int maxPile=*max_element(piles.begin(),piles.end());
        for(int k=1;k<maxPile;k++){
            long long hours=0;
            for(int p:piles){
                hours+=(p+k-1)/k;
            }
            if(hours<=h)return k;
        }
        return maxPile;*/


//    }
//};

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1, r = *max_element(piles.begin(), piles.end());
        int ans = r;

        while (l <= r) {
            int mid = l + (r - l) / 2;
            long hours = 0;
            for (int p : piles)
                hours += (p + mid - 1) / mid;

            if (hours <= h) {
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        return ans;
    }
};
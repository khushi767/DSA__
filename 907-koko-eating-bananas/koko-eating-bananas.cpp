class Solution {
public:

    int minEatingSpeed(vector<int>& piles, int h) {
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
int left=1;int right=*max_element(piles.begin(),piles.end());
int ans=right;
while(left<=right){
int mid=left+(right-left)/2;
long hours=0;
for(int p:piles){
    hours+=(p+mid-1)/mid;

}
if(hours<=h){
    ans=mid;
    right=mid-1;
}
else{
    left=mid+1;
}
}
return ans;

    }
};




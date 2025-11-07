class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        /*Time complexity: O(n²) → TLE for n = 10⁵,✅ Space: O(1)
        int maxprofit=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int profit=prices[j]-prices[i];
                maxprofit=max(maxprofit,profit);
            }
        }
        return maxprofit;*/

/*better approach: Better Approach (Prefix Min + One Pass) — O(n), ✅ Time: O(n),❌ Space: O(n)
        vector<int>minleft(n);
        minleft[0]=prices[0];
        for(int i=1;i<n;i++)
        minleft[i]=min(minleft[i-1],prices[i]);
        int maxprofit=0;
        for(int i=0;i<n;i++){
            int profit=prices[i]-minleft[i];
            maxprofit=max(maxprofit,profit);
        }
        return maxprofit;*/

        int minPrice=INT_MAX;
        int maxProfit=0;
        for(int price:prices){
            if(price<minPrice)
            minPrice=price;
            else
            maxProfit=max(maxProfit,price-minPrice);
        }
        return maxProfit;

    }
};
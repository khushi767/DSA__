class Solution {
public:
     int maxProfit(vector<int>& prices) {
    //     int maxpro=0;
    //     int n=prices.size();
    //     for(int i=0;i<n;i++){
    //         for(int j=i+1;j<n;j++){
    //             if(prices[j]>prices[i]){
    //                 maxpro=max(prices[j]-prices[i],maxpro);
    //             }
    //         }
    //     }
    //     return maxpro;               //Time complexity: O(n^2)  Space Complexity: O(1)


    // }
    //------------------------------------------------------
int maxpro=0;
int n=prices.size();
int minprice=INT_MAX;
for(int i=0;i<prices.size();i++){
    minprice=min(minprice,prices[i]);
    maxpro=max(maxpro,prices[i]-minprice);
}
return maxpro;
     }
};




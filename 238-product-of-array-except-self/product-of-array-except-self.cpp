class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        /*Brute approach: TC=O(n^2),sc=O(1)
     int n=nums.size();
     vector<int>ans(n,1);
     for(int i=0;i<n;i++){
        long long prod=1;
        for(int j=0;j<n;j++){
            if(i==j)continue;
            prod=prod*nums[j];
        }
        ans[i]=(int)prod;
     }
     return ans;*/

/*better approach: Complexities: O(n) time, O(n) extra space.
     int n=nums.size();
     vector<long long>prefix(n,1),suffix(n,1);
     vector<int>ans(n,0);
     prefix[0]=nums[0];
     for(int i=1;i<n;i++)prefix[i]=prefix[i-1]*nums[i];
     suffix[n-1]=nums[n-1];
     for(int i=n-2;i>=0;i--)suffix[i]=suffix[i+1]*nums[i];
     for(int i=0;i<n;i++){
        long long left=(i==0)?1:prefix[i-1];
        long long right=(i==n-1)?1:suffix[i+1];
        ans[i]=(int)(left*right);

     }
     return ans;
     */

     int n=nums.size();
     vector<int>ans(n,1);
     long long leftproduct=1;
     for(int i=0;i<n;i++){
        ans[i]=(int)leftproduct;
        leftproduct=leftproduct*nums[i];
     }
     long long rightProduct=1;
     for(int i=n-1;i>=0;i--){
        ans[i]=(int)((long long)ans[i]*rightProduct);
        rightProduct*=nums[i];
     }
     return ans;
    }
};
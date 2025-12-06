class Solution {
public:
    int findMin(vector<int>& nums) {
        /*Brute approach,TC=O(n),SC=O(1)
        int mn=nums[0];
        for(int x:nums)if(x<mn)mn=x;
        return mn;

        */
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1])return nums[i+1];
        }
        return nums[0];
    }
};
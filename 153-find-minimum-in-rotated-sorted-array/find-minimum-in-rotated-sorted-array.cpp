class Solution {
public:
    int findMin(vector<int>& nums) {
        /*Brute approach,TC=O(n),SC=O(1)
        int mn=nums[0];
        for(int x:nums)if(x<mn)mn=x;
        return mn;

        */
        /*Better, TC=O(n) in worst-case (if array is not rotated or drop is at end).Space complexity: O(1).
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1])return nums[i+1];
        }
        return nums[0];
*/
        //optimal : using binary approach
        int low=0,high=nums.size()-1;
        while(low<high){
            int mid=low+(high-low)/2;
            if(nums[mid]>nums[high]){
                // min is in right half
                low=mid+1;
            }else{
                // nums[mid] <= nums[high], min is at mid or left
                high=mid;
            }
        }
        return nums[low];
    }
};
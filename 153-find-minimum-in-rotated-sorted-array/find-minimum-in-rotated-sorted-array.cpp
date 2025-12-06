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
/*
nums = [3,4,5,1,2]:

low=0,high=4,mid=2 -> nums[2]=5 > nums[4]=2 -> low=3

low=3,high=4,mid=3 -> nums[3]=1 <= nums[4]=2 -> high=3

low==high==3 -> return nums[3]=1

nums = [0,1,2,4,5,6,7] (rotated n times or not rotated):

initial nums[0] <= nums[6], loop still works; it'll reduce to low=0 -> return 0.
*/
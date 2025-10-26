class Solution {
    int binarysearch(vector<int>&nums,int low,int high,int target){
        if(low>high)return -1;
        int mid=low+(high-low)/2;
        if(nums[mid]==target)
        return mid;
        else if(nums[mid]<target)
        return binarysearch(nums,mid+1,high,target);
        else
        return binarysearch(nums,low,mid-1,target);
    }
public:
    int search(vector<int>& nums, int target) {
        return binarysearch(nums,0,nums.size()-1,target);
/*LINEAR SEARCH
        TC=O(n),SC=O(1)
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target)
            return i;
        }
        return -1;
        */
/* BINARY SEARCH
TC=O(log n), SC=O(1)
        int low=0,high=nums.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target)
            return mid;
            else if(nums[mid]<target)
            low=mid+1;
            else
            high=mid-1;
        }
        return -1;*/


    }
};
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        /*
        Brute approach: TC= O(n)
       for(int i=0;i<nums.size();i++){
        if(nums[i]>=target)return i;
       } 
       return nums.size();//If loop finishes fully, it means:target is greater than ALL elements in the array.So target should be inserted at the end.
       */
       //using stl: TC=O(logn)
    //   return lower_bound(nums.begin(),nums.end(),target)-nums.begin();

   // optimal approach: using binary search TC=O(logn)

   int low=0,high=nums.size()-1;
   while(low<=high){
    int mid=low+(high-low)/2;
    if(nums[mid]==target)return mid;
    else if(nums[mid]<target)low=mid+1;
    else high=mid-1;
   }
   return low;
    }
};

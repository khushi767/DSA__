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
       return lower_bound(nums.begin(),nums.end(),target)-nums.begin();
    }
};

/*
int searchInsert(vector<int>& nums, int target) {
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] >= target) return i;
    }
    return nums.size();
}

int searchInsert(vector<int>& nums, int target) {
    return lower_bound(nums.begin(), nums.end(), target) - nums.begin();
}
*/
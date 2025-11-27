class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        /* Brute approach: O(n)
        for(int i=0;i<nums.size()-1;i+=2){
            if(nums[i]!=nums[i+1]){
                return nums[i];
            }
        }
        return nums.back();//last element is single
        */
/*
        //better approach: using xor a^a=0, a^0=a, TC=O(n)
        int x=0;
        for(int n:nums)
        x=x^n;
        return x;
        */
///Optimal Approach: O(log n)
        int low=0,high=nums.size()-1;
        while(low<high){
            int mid=low+(high-low)/2;
            if(mid%2==1)mid--;
            if(nums[mid]==nums[mid+1]){
                low=mid+2;
            }
            else{
                high=mid;
            }
        }
        return nums[low];
        
    }
};
/*
First element of pair is at even index
Second is at odd index
i: 0 1 | 2 3 | 4 5 | ...
   a a | b b | c c
🧠 Case 1:
If mid is even,
correct pair → nums[mid] == nums[mid+1]
single lies on right
🧠 Case 2:
If mid is odd,
correct pair → nums[mid] == nums[mid-1]
single lies on right
Otherwise single element is on the left.
Example Dry Run (nums = [1,1,2,3,3,4,4])
Unique = 2
low=0, high=6
mid=3 → odd → mid=2
nums[2] = 2, nums[3] = 3 (not equal)
→ single is on the left → high = 2
low=0, high=2
mid=1 → odd → mid=0
nums[0] = 1, nums[1] = 1
→ pair is correct → low = 2
low=2, high=2 → stop
return nums[2] = 2

*/

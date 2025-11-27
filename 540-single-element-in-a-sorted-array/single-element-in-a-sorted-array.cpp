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

        //better approach: using xor a^a=0, a^0=a, TC=O(n)
        int x=0;
        for(int n:nums)
        x=x^n;
        return x;
    }
};


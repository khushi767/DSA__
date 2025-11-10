class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        /*
       // better approach: Time: O(n) average (for the algorithm it performs), SC=O(1)
        next_permutation(nums.begin(),nums.end());*/

        int n=nums.size();
        int pivot=n-2;
        while(pivot>=0 && nums[pivot]>=nums[pivot+1]){
            --pivot;
        }
        if(pivot<0){
            reverse(nums.begin(),nums.end());
            return;
        }
        int successor=n-1;
        while(successor>pivot && nums[successor]<=nums[pivot]){
            --successor;
        }
        swap(nums[pivot],nums[successor]);
        reverse(nums.begin()+pivot+1,nums.end());


    }
};
// class Solution {
// public:
//     void nextPermutation(vector<int>& nums) {
//        next_permutation(nums.begin(),nums.end());   
//     }
// };
//------------------------------------------------------
// class Solution {
// public:
//     void nextPermutation(vector<int>& nums) {
//         int n=nums.size();
//      int i=n-2;
//      while(i>=0 && nums[i]>=nums[i+1]){
//         i--;
//      }  
//      if(i>=0){
//         int j=n-1;
//         while(nums[j]<=nums[i]){
//             j--;
//         }
//         swap(nums[i],nums[j]);
//      }  
//      reverse(nums.begin()+i+1,nums.end());
  
//     }
// };
//-----------------------------------------------------


class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int ind = -1; // Initialize with -1 (not -2)

        // Step 1: Find the first decreasing element from the end
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                ind = i;
                break;
            }
        }

        // Step 2: If no decreasing element was found, reverse the array (it is the last permutation)
        if (ind == -1) {
            reverse(nums.begin(), nums.end());
            return; // No need to return `nums`, as it is a void function
        }

        // Step 3: Find the element just larger than nums[ind] to swap
        for (int i = n - 1; i > ind; i--) {
            if (nums[i] > nums[ind]) {
                swap(nums[i], nums[ind]);
                break;
            }
        }

        // Step 4: Reverse the elements after the index `ind`
        reverse(nums.begin() + ind + 1, nums.end());
    }
};

    
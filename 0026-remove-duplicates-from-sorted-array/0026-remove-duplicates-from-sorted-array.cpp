class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;

        int cnt = 1;  // Start from the second element
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                nums[cnt] = nums[i];
                cnt++;
            }
        }
        return cnt;
    }
};

class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end()); // Sort the array

        long long left = 0, totalOperations = 0;
        int maxFrequency = 1;

        for (long long right = 0; right < nums.size(); right++) {
            // Calculate operations needed to make all elements in the window equal to nums[right]
            if (right > 0) {
                totalOperations += (nums[right] - nums[right - 1]) * (right - left);
            }

            // If operations exceed k, slide the window from the left
            while (totalOperations > k) {
                totalOperations -= nums[right] - nums[left];
                left++;
            }

            // Update the maximum frequency
            maxFrequency = max(maxFrequency, int(right - left + 1));
        }

        return maxFrequency;
    }
};
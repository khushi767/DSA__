class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        //sort(nums.begin(),nums.end());
        int s2=0;
        int sum= (n*(n+1))/2;
        for(int i=0;i<n;i++){
        s2=s2+nums[i];
        }
        int missing_number=sum-s2;
        return missing_number;
    }
};
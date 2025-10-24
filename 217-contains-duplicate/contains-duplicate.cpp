class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
         int n=nums.size();
       //O(n^2)
       /*
       for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]==nums[j])
            return true;
        }
       } 
       return false;*/

       /*Time Complexity: O(n log n)
Space Complexity: O(1) (if in-place sort is used)
       sort(nums.begin(),nums.end());
       for(int i=0;i<n-1;i++){
        if(nums[i]==nums[i+1])
        return true;
       }
       return false;*/

       unordered_set<int>value;
       for(int num:nums){
        if(value.find(num)!=value.end())
        return true;
        value.insert(num);
       }
       return false;
/*
       Hash Set Method (Optimal)
Time Complexity: O(n)
Space Complexity: O(n)*/
        
    }
};
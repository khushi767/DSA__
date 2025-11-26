class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        /* brute: o(n2)
        vector<int>arr;
        for(int i=0;i<nums.size();i++){
            int count=0;
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j])
                arr.push_back(nums[i]);
                
            }
        }
        return arr;
        */
        unordered_set<int>seen;
        vector<int>ans;
        for(int v:nums){
            if(seen.count(v)){
                ans.push_back(v);

            }else{
                seen.insert(v);
            }
        }
        return ans;

    }
};

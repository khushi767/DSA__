class Solution {
public:
    int singleNumber(vector<int>& nums) {
        /* Brute force TC=O(n2),SC=O(1)
        for(int i=0;i<nums.size();i++){
            int count=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]==nums[i])
                count++;
            }
            if(count==1)return nums[i];
        }
        return -1;
        */
        /* optimal using xor
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans=ans^nums[i];
        }
        return ans;
        */

/*better using sorting: Time O(n log n) (due to sort), Space O(1)*/
/*sort(nums.begin(),nums.end());
int n=nums.size();
for(int i=0;i<n-1;i+=2){
    if(nums[i]!=nums[i+1])return nums[i];
}
return nums.back();*/

/*using hashmap: Time O(n), Space O(n).*/
unordered_map<int,int>cnt;
for(int x:nums)cnt[x]++;
for(auto &p:cnt)if(p.second==1)return p.first;
return -1;
    }
};



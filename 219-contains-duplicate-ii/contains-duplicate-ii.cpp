class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        /*  //o(n2)
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]&& abs(i-j)<=k)
                return true;
            }
            
        }
        return false;*/
/*
Time: O(n)

Space: O(n)
✅ Most efficient & widely used.

        unordered_map<int,int>visited;
        for(int i=0;i<nums.size();i++){
            if(visited.count(nums[i]) && i-visited[nums[i]]<=k)
            return true;
            visited[nums[i]]=i;
        }
        return false;*/

unordered_set<int>window;
for(int i=0;i<nums.size();i++){
    if(window.count(nums[i]))return true;
    window.insert(nums[i]);
    if(window.size()>k)
    window.erase(nums[i-k]);
}
return false;

    }
};
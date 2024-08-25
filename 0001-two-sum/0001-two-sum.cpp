class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    //    vector<int>ans;
    //    for(int i=0;i<nums.size();i++){
    //     for(int j=i+1;j<nums.size();j++){
    //         if(nums[i]+nums[j]==target){
    //             ans.push_back(i);
    //             ans.push_back(j);
    //             return ans;
    //         }
    //     }
    // }
    //    return {-1,-1};
    // }   
    //--------------------------------------------------
    // unordered_map<int,int>map;
    // for(int i=0;i<nums.size();i++){
    // int num=nums[i];
    // int nextnum=target-num;
    // if(map.find(nextnum)!=map.end()){
    //     return {map[nextnum],i};
    // }
    // map[num]=i;
    // }
    // return {-1,-1};
    // }
    //--------------------------------------------------
    vector<pair<int, int>> numWithIndex;
    
    // Store numbers with their original indices
    for (int i = 0; i < nums.size(); i++) {
        numWithIndex.push_back({nums[i], i});
    }
    
    // Sort the array based on the values
    sort(numWithIndex.begin(), numWithIndex.end());
    
    int left = 0;
    int right = nums.size() - 1;
    
    while (left < right) {
        int sum = numWithIndex[left].first + numWithIndex[right].first;
        
        if (sum == target) {
            // Return the original indices
            return {numWithIndex[left].second, numWithIndex[right].second};
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }
    
    return {-1, -1};
    }
};
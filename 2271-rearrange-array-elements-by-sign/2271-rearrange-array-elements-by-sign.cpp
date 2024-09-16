// class Solution {
// public:
//     vector<int> rearrangeArray(vector<int>& nums) {
//        vector<int>pos;
//        vector<int>neg;
//        for(int i=0;i<nums.size();i++){
//         if(nums[i]>0)pos.push_back(nums[i]);//TC=O(n),SC=O(n)
//         else neg.push_back(nums[i]);
//  } 
//  for(int i=0;i<nums.size()/2;i++){
//     nums[2*i]=pos[i];
//     nums[2*i+1]=neg[i];
//  }
//  return nums;
//     }
// };

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
int n=nums.size();
vector<int>ans(n);
int posindex=0,negindex=1;
for(int i=0;i<n;i++){
    if(nums[i]<0){
        ans[negindex]=nums[i];
        negindex+=2;
    }
    else{
        ans[posindex]=nums[i];
        posindex+=2;
    }
}
return ans;


    }
};

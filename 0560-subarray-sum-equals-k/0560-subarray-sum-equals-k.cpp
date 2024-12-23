// class Solution {
// public:
//     int subarraySum(vector<int>& nums, int k) {
//         int n=nums.size();
//         int cnt=0;
//         for(int i=0;i<nums.size();i++){
//             for(int j=i;j<nums.size();j++){
//                 int sum=0;
//                 for(int k=i;k<=j;k++)
//                 sum+=nums[k];
//                 if(sum==k)cnt++;
//             }
//         }
//         return cnt;
//     }
// };              TC=O(n^3)  SC=O(1)
//------------------------------
// class Solution {
// public:
//     int subarraySum(vector<int>& nums, int k) {
// int n=nums.size();
// int cnt=0;
// for(int i=0;i<n;i++){
//     int sum=0;
//     for(int j=i;j<n;j++){
//         sum+=nums[j];
//         if(sum==k)
//         cnt++;
//     }
// }
// return cnt;
//     }
// };         TC=O(n^2) SC=O(1)


//----------------------------------
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
int n=nums.size();
map<int,int>mpp;
int presum=0,cnt=0;
mpp[0]=1;
for(int i=0;i<n;i++){
    presum+=nums[i];
    int remove=presum-k;
    cnt+=mpp[remove];
    mpp[presum]+=1;
}
return cnt;
    }
};

//O(n)=TC SC=O(1)
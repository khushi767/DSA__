/*
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        /* Brute force: TC: O(n)
        int first=-1,last=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                if(first==-1)first=i;//pehli baar target milan te set karo
                last=i;//We update last = i every time target mil jaye
            }
        }
        return {first,last};
            
    }
};
*/
//-------------------------------------------------------------------

class Solution {
public:

int findfirst(vector<int>&nums,int target){
    int start=0,end=nums.size()-1,ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(nums[mid]==target){
            ans=mid;
            end=mid-1;
        }
        else if(nums[mid]<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}
int findlast(vector<int>& nums,int target){
    int start=0,end=nums.size()-1,ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(nums[mid]==target){
            ans=mid;
            start=mid+1;
        }
        else if(nums[mid]<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=findfirst(nums,target);
        int last=findlast(nums,target);
        return {first,last};
    }
};
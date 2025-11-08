class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n==0)return 0;
        int i=1;
        for(int j=1;j<n;j++){
            if(nums[j]!=nums[j-1]){
                nums[i]=nums[j];
                ++i;
            }
        }
        return i;
     /*   int n=nums.size();
        if(n==0)return 0;
        vector<int>unique;
        unique.reserve(n);
        unique.push_back(nums[0]);
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[i-1]){
                unique.push_back(nums[i]);
            }
        }
        for(int i=0;i<(int)unique.size();i++){
            nums[i]=unique[i];
        }
        return unique.size();*/
        /*
        Brute-force (in-place, O(n²) time, O(1) extra space
        int n=nums.size();
        if(n==0)return 0;
        int i=0;
        while(i<n-1){
            if(nums[i]==nums[i+1]){
                for(int j=i+1;j<n-1;j++){
                    nums[j]=nums[j+1];
                }
                --n;
            }else{
                ++i;
            }
        }
        return n;
        */
     
    }
};
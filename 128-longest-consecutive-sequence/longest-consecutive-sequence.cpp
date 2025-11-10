class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.empty())return 0;
        unordered_set<int>s;
        for(int x:nums)s.insert(x);
        int best=0;
        for(int x:s){
            if(s.find(x-1)==s.end()){
                int length=1;
                int cur=x+1;
                while(s.find(cur)!=s.end()){
                    ++length;
                    ++cur;
                }
                best=max(best,length);
            }
        }
        return best;

        /*
        Better: sort then scan, Time: O(n log n) due to sort
        if(nums.empty())return 0;
        sort(nums.begin(),nums.end());
        int best=1;
        int curr=1;
        for(int i=1;i<nums.size();++i){
            if(nums[i]==nums[i-1]){
                continue;
            }
            else if(nums[i]==nums[i-1]+1){
                curr++;
            }
            else{
                best=max(best,curr);
                curr=1;
            }
        }
        best=max(best,curr);
        return best;
*/

        /*
        Brute:O(n^2)
        int n=nums.size();
        if(n==0)return 0;
        int best=1;
        for(int i=0;i<n;i++){
            int curr=nums[i];
            int length=1;
            int next=curr+1;
            while(true){
                bool found=false;
                for(int j=0;j<n;j++){
                    if(nums[j]==next){
                        found=true;
                        break;
                    }
                }
                if(!found)break;
                length++;
                next++;
            }
            best=max(best,length);
        }
        return best;*/


    }
};
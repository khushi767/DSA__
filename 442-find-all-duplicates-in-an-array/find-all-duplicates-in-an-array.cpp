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
        /*hmne ik set bnalia seen naam ka thik hai aur ik ans vector bnaya jidhr hm duplicate array dalege, pr initally seen me kya hai chlo wo empty hai frr hmne for loop chlai seen.count ye dekhta hai kya agr pehle se number hai agr muje acha agr set me pehle se wo value hai to hm ans ma value push back krege aur agr nhi hai to seen me insert krgee, acha lgta ab muje smj aagya*/
        /*better approach:Time: O(n) — ek-ek number ek baar dekhte ho.Space: O(n) — set mein kuch numbers store karne padte hain (extra memory).
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
*/
/*optimal approach: TC=O(n),SC=O(1)
✔ “Jo array ki value hai usme -1 kar rhe hain index nikalne ke liye”
✔ “Agar nums[idx] already negative hai → duplicate → ans me daal do”
✔ “Agar negative nahi hai → usko negative kar do → mark visited”
✔ “Pure array ko positive hi treat karte hain loop ke starting me abs use karke”
*/
vector<int>ans;
for(int i=0;i<nums.size();i++){
    int val=abs(nums[i]);
    int idx=val-1;
    if(nums[idx]<0){
        ans.push_back(val);
    }else{
        nums[idx]=-nums[idx];
    }
}
return ans;
    }
};

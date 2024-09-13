class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    //     int maxi=INT_MIN;
    //     for(int i=0;i<nums.size();i++){
    //         for(int j=i;j<nums.size();j++){
    //             int sum=0;
    //             for(int k=i;k<=j;k++){
    //                 sum+=nums[k];
                   
    //             }
            
    //          maxi=max(maxi,sum);
    //     }
    // }
    //  return maxi;
    // }                         O(n^3)

    //---------------------------------------------------------
//     int sum=0;
// int maxi=INT_MIN;
//    for (int i = 0; i < nums.size(); i++) {
//     sum = 0; // Reset sum for each subarray starting from index i
//     for (int j = i; j < nums.size(); j++) { // Use j instead of i for the inner loop
//         sum += nums[j]; // Sum subarray elements from i to j
//         maxi = max(maxi, sum); // Update maxi if sum is larger
//     }
//    }
//     return maxi;
//     }                  // O(n^2)
//--------------------------------------------------------------
//KADANE ALGORITHM
long long maxi=LONG_MIN;
long long sum=0;
for(int i=0;i<nums.size();i++){
    sum+=nums[i];
    maxi=max(maxi,sum);

if(sum<0){
    sum=0;
}
}
return maxi;
    }
};

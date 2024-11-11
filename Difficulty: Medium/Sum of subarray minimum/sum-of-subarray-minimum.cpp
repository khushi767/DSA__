//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
//     int sumSubarrayMins(vector<int> &arr) {
//       int n=arr.size();
//       const int MOD=1e9+7;
//       vector<int>prevsmaller(n),nextsmaller(n);
//       stack<int>s1,s2;
//       //compute prevsmaller elment
//       for(int i=0;i<n;i++){
//           while(!s1.empty()&& arr[s1.top()]>=arr[i]){
//               s1.pop();
//           }
//       }
//     }
// };

    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        const int MOD = 1e9 + 7;
        
        vector<int> prevSmaller(n), nextSmaller(n);
        stack<int> s1, s2;

        // Compute prevSmaller array
        for (int i = 0; i < n; i++) {
            while (!s1.empty() && arr[s1.top()] >= arr[i]) {
                s1.pop();
            }
            prevSmaller[i] = s1.empty() ? i + 1 : i - s1.top();
            s1.push(i);
        }

        // Compute nextSmaller array
        for (int i = n - 1; i >= 0; i--) {
            while (!s2.empty() && arr[s2.top()] > arr[i]) {
                s2.pop();
            }
            nextSmaller[i] = s2.empty() ? n - i : s2.top() - i;
            s2.push(i);
        }

        // Calculate the result
        long long result = 0;
        for (int i = 0; i < n; i++) {
            result = (result + (long long)arr[i] * prevSmaller[i] * nextSmaller[i]) % MOD;
        }
        
        return (int)result;
    }
};



//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.sumSubarrayMins(arr);
        cout << res << endl;
        cout << "~" << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends
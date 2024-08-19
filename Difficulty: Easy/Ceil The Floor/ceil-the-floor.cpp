//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User code template

class Solution {
public:
    std::vector<int> getFloorAndCeil(int x, std::vector<int> &arr) {
        int floor = INT_MIN;  // Initially, set floor to the smallest possible value
        int ceil = INT_MAX;   // Initially, set ceil to the largest possible value

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] <= x && arr[i] > floor) {
                floor = arr[i];
            }
            if (arr[i] >= x && arr[i] < ceil) {
                ceil = arr[i];
            }
        }

        // If floor or ceil hasn't been updated, return -1 for them
        if (floor == INT_MIN) floor = -1;
        if (ceil == INT_MAX) ceil = -1;

        return {floor, ceil};
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int x;
        string input;
        cin >> x;
        cin.ignore();

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.getFloorAndCeil(x, arr);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends
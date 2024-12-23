//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution
{
    public:
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        //pop first k from queue and put in stack
        stack<int>s;
        for(int i=0;i<k;i++){
            int val=q.front();
            q.pop();
            s.push(val);
        }
        //fetch from stack and push in queue
        while(!s.empty()){
            int val=s.top();
            s.pop();
            q.push(val);
        }
        //fetch first n-k element from queue and push back
        int t=q.size()-k;
        while(t--){
            int val=q.front();
            q.pop();
            q.push(val);
        }
return q;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        Solution ob;
        queue<int> ans = ob.modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    
cout << "~" << "\n";
}
}
// } Driver Code Ends
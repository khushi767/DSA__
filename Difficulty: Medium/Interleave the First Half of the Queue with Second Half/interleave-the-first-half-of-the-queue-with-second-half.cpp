//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    vector<int> rearrangeQueue(queue<int> &q){
        //fist half ko stack me daala, stack se queue me daala wo reverse ho jayega, 
        //fist half of queue ko pop kiya aur push krdia taki aage wala piche jaaye
        //first half ko frse stack me daala ab wo sidha ho jayega, aab use ik ik krke queue me daaldo
        int n=q.size();
        int half=n/2;
        queue<int>firsthalf;
        //move firsthalf of element to separate queue
        for(int i=0;i<half;i++){
            firsthalf.push(q.front());
            q.pop();
        }
        vector<int>result;
        //push from stack to queue
        while(!firsthalf.empty()){
            result.push_back(firsthalf.front());
            firsthalf.pop();
            
            result.push_back(q.front());
            q.pop();
        }
        return result;
    }
    
};


//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        queue<int> q;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            q.push(a);
        }
        Solution ob;
        vector<int> ans=ob.rearrangeQueue(q);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    
cout << "~" << "\n";
}
    
    return 0;
}
// } Driver Code Ends
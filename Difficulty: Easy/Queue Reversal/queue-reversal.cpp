//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//queue se element nikalo and stack me daalo and then stack se nikalo and queue me daalo
//using recursion: top elemnt ko side me rkhlo baki recusrion se reverse krlo and then top wale elemnt ko daaldo

class Solution
{
    public:
    queue<int> rev(queue<int> q)
    {
         stack<int>s;
         while(!q.empty()){
             int element=q.front();
             q.pop();
             s.push(element);
         }
         while(!s.empty()){
             int element=s.top();
             s.pop();
             q.push(element);
         }
         return q;
    }
};


//{ Driver Code Starts.
int main()
{
    int test;
    cin>>test; 
    while(test--)
    {
    queue<int> q; 
    int n, var; 
    cin>>n; 
    while(n--)
    {
        cin>>var; 
        q.push(var);
    }
    Solution ob;
    queue<int> a=ob.rev(q); 
    while(!a.empty())
    {
        cout<<a.front()<<" ";
        a.pop();
    }
    cout<<endl; 
    
cout << "~" << "\n";
}
}
// } Driver Code Ends
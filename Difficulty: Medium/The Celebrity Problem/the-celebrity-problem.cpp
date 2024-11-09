//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  private:
  
  bool knows(vector<vector<int>>&mat,int a,int b,int n){
      if(mat[a][b]==1)
      return true;
      else
      return false;
  }
   public:
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& mat) {
        // code here
        int n=mat.size();
        stack<int>s;
        for(int i=0;i<n;i++){
            s.push(i);
        }
        while(s.size()>1){
            int a=s.top();
            s.pop();
            int b=s.top();
            s.pop();
            if(knows(mat,a,b,n)){
                s.push(b);
            }
            else{
                s.push(a);
            }
        }
        int ans=s.top();
        //single element in stack is potential candidate
        bool rowcheck=false;
        int zerocount=0;
        for(int i=0;i<n;i++){
            if(mat[ans][i]==0)
            zerocount++;
        }
        if(zerocount==n){
            rowcheck=true;
        }
        
        
        bool colcheck=false;
        int onecount=0;
        for(int i=0;i<n;i++){
            if(mat[i][ans]==1)
            onecount++;
        }
        if(onecount==n-1){
            colcheck=true;
        }
        if(rowcheck==true && colcheck==true){
        return ans;
        }
        else{
            return -1;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int> > M(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> M[i][j];
            }
        }
        Solution ob;
        cout << ob.celebrity(M) << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends
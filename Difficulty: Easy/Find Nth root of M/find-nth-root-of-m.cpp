//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	long long power(int ii,int nn){
	    long long ans=1;
	    for(int i=0;i<nn;i++){
	        ans*=ii;
	    }
	    return ans;
	}
	int NthRoot(int n, int m)
	{
	    for(int i=1;i<=m;i++){
	        long long value=power(i,n);
	        if(value==m)return i;
	        else if(value>m)break;
	    }
	    return -1;
	}  

};








// long long power(int ii,int nn){
//   long long result=1;//i^n
//   for(int i=0;i<nn;i++){//take upto n
//     result*=ii;//ii*ii*ii upto loop nn
//   }
//   return result;
// }

// int NthRoot(int n, int m) {
//   for(int i=1;i<=m;i++){
//     long long value=power(i,n);//i^n
//     if(value==m)return i;
//     else if(value>m)break;
//   }
//   return -1;
// }


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends
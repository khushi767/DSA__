//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


// } Driver Code Ends
/*You are required to complete this method*/


class Solution {
  public:
  
  // Function to find the next smaller element for each index
  vector<int> nextSmallerElement(int *arr, int n) {
      stack<int> s;
      s.push(-1);
      vector<int> ans(n);
      
      for (int i = n - 1; i >= 0; i--) {
          int curr = arr[i];
          
          // Pop elements from stack while top element is greater than or equal to current
          while (s.top() != -1 && arr[s.top()] >= curr) {
              s.pop();
          }
          
          // Store the index of next smaller element
          ans[i] = s.top();
          s.push(i);
      }
      return ans;
  }
  
  // Function to find the previous smaller element for each index
  vector<int> prevSmallerElement(int *arr, int n) {
      stack<int> s;
      s.push(-1);
      vector<int> ans(n);
      
      for (int i = 0; i < n; i++) {
          int curr = arr[i];
          
          // Pop elements from stack while top element is greater than or equal to current
          while (s.top() != -1 && arr[s.top()] >= curr) {
              s.pop();
          }
          
          // Store the index of previous smaller element
          ans[i] = s.top();
          s.push(i);
      }
      return ans;
  }
  
  // Function to calculate the largest rectangle area in a histogram
  int largestRectangleArea(int* heights, int n) {
      vector<int> next = nextSmallerElement(heights, n);
      vector<int> prev = prevSmallerElement(heights, n);
      int area = 0;  // Initialize area to zero for finding max area
      
      // Calculate area for each histogram bar
      for (int i = 0; i < n; i++) {
          int height = heights[i];
          
          // If no next smaller element, set it to the end of the histogram
          if (next[i] == -1) {
              next[i] = n;
          }
          
          // Width of the rectangle with heights[i] as the smallest height
          int width = next[i] - prev[i] - 1;
          int newArea = height * width;
          
          // Update maximum area
          area = max(area, newArea);
      }
      return area;
  }
  
  // Function to find the maximum area of a rectangle in a binary matrix
  int maxArea(int M[MAX][MAX], int n, int m) {
      // Calculate the largest rectangle area in the first row
      int area = largestRectangleArea(M[0], m);
      
      // Process each row starting from the second row
      for (int i = 1; i < n; i++) {
          for (int j = 0; j < m; j++) {
              // Update the matrix to add previous row's height if the current element is 1
              if (M[i][j] != 0) {
                  M[i][j] += M[i - 1][j];
              } else {
                  M[i][j] = 0;  // Reset if current element is 0
              }
          }
          
          // Calculate the largest rectangle area with updated heights
          int newArea = largestRectangleArea(M[i], m);
          
          // Update maximum area
          area = max(area, newArea);
      }
      return area;
  }
};


// class Solution{
//   public:
//   vector<int>nextSmallerElement(int *arr,int n){
//       stack<int>s;
//       s.push(-1);
//       vector<int>ans(n);
//       for(int i=n-1;i>=0;i--){
//           int curr=arr[i];
//           while(s.top()!=-1 && arr[s.top()]>=curr){
//               s.pop();
//           }
//           ans[i]=s.top();
//           s.push(i);
//       }
//       return ans;
//   }
  
//   vector<int>prevSmallerElement(int *arr,int n ){
//       stack<int>s;
//       s.push(-1);
//       vector<int>ans(n);
//       for(int i=0;i<n;i++){
//           int curr=arr[i];
//           while(s.top()!=-1 && arr[s.top()]>=curr){
//               s.pop();
//           }
//           ans[i]=s.top();
//           s.push(i);
//       }
//       return ans;
      
//   }
  
//   int largestRectangleArea(int* heights,int n){
//       vector<int>next(n);
//       next=nextSmallerElement(heights,n);
//       vector<int>prev(n);
//       prev=prevSmallerElement(heights,n);
//       int area=INT_MIN;
//       for(int i=0;i<n;i++){
//           int l=heights[i];
//       }
//       if(next[i]==-1){
//           next[i]=n;
//       }
//       int b=next[i]-prev[i]-1;
//       int newArea=l*b;
//       area=max(area,newArea);
//   }
//   return area;
// }

//     int maxArea(int M[MAX][MAX], int n, int m) {
//         int area=largestRectangleArea(M[0],m);
//         for(int i=1;i<n;i++){
//             for(int j=0;j<m;j++){
//                 //update row by adding previous values
//                 if(M[i][j]!=0){
//                 M[i][j]=M[i][j]+M[i-1][j];//purani row ki value ko add krdia
//                 else
//                 M[i][j]=0;
//             }
            
//             int newArea=largestRectangleArea(M[i],m);
//             area=max(area,newArea);
//         }
// return area;
//     }
// };


//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    
cout << "~" << "\n";
}
}

// } Driver Code Ends
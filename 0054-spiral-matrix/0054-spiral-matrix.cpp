class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
       vector<int>ans;
       int n=matrix.size();//no of rows
       int m=matrix[0].size();//no of columns
       int top=0,left=0,bottom=n-1,right=m-1;
while(top<=bottom && left<=right){
    //moving from left to right
    for (int i=left;i<=right;i++)
    ans.push_back(matrix[top][i]);
    top++;
    //moving from top to bottom
    for(int i=top;i<=bottom;i++)
    ans.push_back(matrix[i][right]);
    right--;
//for moving from right to left
if(top<=bottom){
    for(int i=right;i>=left;i--)
    ans.push_back(matrix[bottom][i]);
    bottom--;
}
//for moving from bottom to top
if(left<=right){
for(int i=bottom;i>=top;i--)
ans.push_back(matrix[i][left]);
left++;
}

}
return ans;
  }
};

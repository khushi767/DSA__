class Solution {
  public:
  
  bool issorted(vector<int>&arr,int n){
      if(n==0||n==1)return true;
      return arr[n-1]>=arr[n-2]&&issorted(arr,n-1);
  }
    bool isSorted(vector<int>& arr) {
        // code here
        return issorted(arr,arr.size());
    }
};
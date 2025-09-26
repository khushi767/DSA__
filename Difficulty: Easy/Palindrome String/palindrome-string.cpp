class Solution {
  public:
    bool isPalindrome(string& s) {
        // code here
       /* string pal=s;
        reverse(s.begin(),s.end());
        return s==pal;
        */
        string pal=s;
        int left=0;
        int right=s.size()-1;
        while(left<right){
            swap(s[left],s[right]);
            left++;
            right--;
        }
        return s==pal;
    }
    
};
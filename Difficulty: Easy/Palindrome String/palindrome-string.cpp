class Solution {
  public:
    bool isPalindrome(string& s) {
        // code here
        string pal=s;
        reverse(s.begin(),s.end());
        return s==pal;
    }
    
};
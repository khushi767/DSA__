class Solution {
public:
    bool isPalindrome(string s) {
        string newstr="";
        for(char i:s){
            if(isalnum(i)){
                newstr+=tolower(i);
            }
        }
        int l=0,r=newstr.size()-1;
        while(l<r){
            if(newstr[l++]!=newstr[r--])return false;
        }
        return true;
    }
};
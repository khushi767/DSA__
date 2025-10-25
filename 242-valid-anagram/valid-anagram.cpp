class Solution {
public:
    bool isAnagram(string s, string t) {

        /*Time Complexity:Sorting: O(n log n),Comparison: O(n)
✅ Total: O(n log n)
        if(s.size()!=t.size())return false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s==t;*/

        //frequency hashing
     /*   Time Complexity:

Count: O(n)
✅ Total: O(n)

\U0001f539 Space Complexity:

O(1) (constant 26 letters)
        if(s.size()!=t.size())return false;
        vector<int>count(26,0);
        for(char c:s)count[c-'a']++;
        for(char c:t)count[c-'a']--;
        for(int x:count)
        if(x!=0)return false;
        return true;*/

        if(s.size()!=t.size())return false;
        unordered_map<char,int>freq;
        for(char c:s)freq[c]++;
        for(char c:t)freq[c]--;
        for(auto[ch,cnt]:freq){
            if(cnt!=0)return false;

        }
        return true;
    }
};
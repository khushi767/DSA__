class Solution {
public:
/*
Brute force
Sorting each comparison → O(k log k) where k = length of string
Comparing each pair → O(n²)
\U0001f449 Total: O(n² * k log k)
This is very slow for n = 10⁴.
bool isAnagram(string a,string b){
    if(a.size()!=b.size())return false;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    return a==b;
}
*/
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        /*Brute force
        vector<vector<string>>res;
        vector<bool>visited(strs.size(),false);
        for(int i=0;i<strs.size();i++){
            if(visited[i])continue;
            vector<string>group={strs[i]};
            visited[i]=true;

            for(int j=i+1;j<strs.size();j++){
                if(!visited[j]&& isAnagram(strs[i],strs[j])){
                    group.push_back(strs[j]);
                    visited[j]=true;
                }
            }
            res.push_back(group);
        }
        return res;*/

/*better approach: Sorting each string: O(k log k)
Doing it for all strings: O(n * k log k)


        unordered_map<string,vector<string>>mp;
        for(string s:strs){
            string key=s;
            sort(key.begin(),key.end());
            mp[key].push_back(s);
        }
        vector<vector<string>>res;
        for(auto &p:mp)
        res.push_back(p.second);
        return res;*/

        //freq based key optimal approach, instead of sorting create a 26 length freq vector for each string and use as key
        //TC=O(K*n)k for counting freq per string, n is no of input

        unordered_map<string,vector<string>>mp;
        for(string s:strs){
            vector<int>freq(26,0);
            for(char c:s)freq[c-'a']++;
            string key;
            for(int f:freq)
            key+=to_string(f)+"#";
            mp[key].push_back(s);
        }
        vector<vector<string>>res;
        for(auto &p:mp)
        res.push_back(p.second);
        return res;

 
    }
};
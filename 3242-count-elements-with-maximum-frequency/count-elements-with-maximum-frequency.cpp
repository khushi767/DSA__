/*
USING HASHMAP
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
     
        int freq[101]={0};
        for(int i:nums){
            freq[i]++;
        }
        int maxfreq=*max_element(freq,freq+101);
        int total=0;
        for(int i=1;i<=100;i++){
            if(freq[i]==maxfreq)
            total+=freq[i];
        }
 return total;
    }
};

*/
//USING MAPS
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
    unordered_map<int,int>freq;
    for(int num:nums){
        freq[num]++;
    }
    int maxfreq=0;
    for(auto& [num,count]:freq)
    maxfreq=max(maxfreq,count);

    //total no of elements with that freq
    int total=0;
    for(auto& [num,count]:freq)
    if(count==maxfreq)
    total+=count;

    return total;

    }
};
   
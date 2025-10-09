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


   
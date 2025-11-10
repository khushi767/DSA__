class TimeMap {
public:
unordered_map<string,vector<pair<int,string>>>mp;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mp[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        if(mp.find(key)==mp.end())return "";
       auto &v=mp[key];
       int left=0,right=v.size()-1;
       string res="";
       while(left<=right){
        int mid=left+(right-left)/2;
        if(v[mid].first<=timestamp){
            res=v[mid].second;
            left=mid+1;
        }else{
            right=mid-1;
        }
       } 
       return res;
    }
};
/*
//unordered_map<string,vector<pair<int,string>>>mp;
unordered_map<string,map<int,string>> mp;
    TimeMap() {
        
      
    }
    
    void set(string key, string value, int timestamp) {
       //mp[key].push_back({timestamp,value});
       mp[key][timestamp]=value;
    }
    
    string get(string key, int timestamp) {
 /*       //using binary search
       if(mp.find(key)==mp.end())return "";
       auto &v=mp[key];
       int left=0,right=v.size()-1;
       string res="";
       while(left<=right){
        int mid=left+(right-left)/2;
        if(v[mid].first<=timestamp){
            res=v[mid].second;
            left=mid+1;
        }else{
            right=mid-1;
        }
       } 
       return res;*/
/*
       if(mp.find(key)==mp.end())return "";
       auto it=mp[key].upper_bound(timestamp);
       if(it==mp[key].begin())return "";
       --it;
       return it->second;
    }
};*/

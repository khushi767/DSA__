class Solution {
  public:
    bool divby13(string &s) {
        // code here
      /*  int sum=stoi(s);
        if(sum%13==0)
        return true;
        else
        return false;*/
        int len=s.size();
        if(len==0 && s[0]=='0'){return true;}
        
        if(len%3==1){s+="00";
        len+=2;
        }
        else if(len%3==2){s+="0";
        len+=1;
        }
        
        int sum=0;
        int p=1;
        for(int i=len-1;i>=0;i--){
            int group=0;
            group+=s[i--]-'0';
            group+=(s[i--]-'0')*10;
            group+=(s[i]-'0')*100;
            sum=sum+group*p;
            p*=-1;
        }
        sum=abs(sum);
        return (sum%13==0);
        
    }
};
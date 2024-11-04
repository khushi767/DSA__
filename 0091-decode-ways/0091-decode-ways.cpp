
class Solution{
    public:
    int numDecodings(string s){
        if(s.empty()||s[0]=='0')return 0;
        int val1=1;
        int val2=1;
        for(int i=1;i<s.length();++i){
            int current=0;
            int single_digit=s[i]-'0';
            int two_digit=(s[i-1]-'0')*10+single_digit;
            if(single_digit>=1){
                current+=val2;
            }
            if(two_digit>=10&& two_digit<=26){
                current+=val1;
            }
            val1=val2;
            val2=current;

        }
        return val2;
    }

};


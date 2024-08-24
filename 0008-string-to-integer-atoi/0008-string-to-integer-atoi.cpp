class Solution {
public:
    int myAtoi(string s) {
        int n=s.size();
        int index=0;
        long num=0;
        int negative=1;
        int foundzeroes=0;

        //step1: skip leading whitespaces
        while(index<n && s[index]==' ')index++;
        //step2: Handle leading zeroes
        while(index<n && s[index]=='0'){
            foundzeroes=1;
            index++;
        }
        //step3:Determine the sign
        if(index<n && s[index]=='-'){
            if(foundzeroes==1)return 0;
            if(s[index+1]=='+')return 0;
            negative=-1;
            index++;
        }else if(index<n && s[index]=='+'){
            if(foundzeroes==1)return 0;
            if(s[index+1]=='-')return 0;
            index++;
        }
        //step4: convert characters to integers
        while(index<n && isdigit(s[index])){
            num=num*10+(s[index]-'0');
            if(num>INT_MAX && negative==1)return INT_MAX;
            if(num>2147483647 && negative==-1)return INT_MIN;
            index++;
        }
        return num*negative;
    }
};
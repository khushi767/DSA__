class Solution {
public:
// long double power(long double x, long int n ){
//     if(n==1)return x;
//     if( n==0){
//         return 1;
//     }
//     if(n<0){
//         return 1/power(x,-n);
//     }
//     if(n%2==0){
//         return power(x*x,n/2);
//     }
//     else{
//         return x*power(x*x,n/2);
//     }
// }
//     double myPow(double x, int n) {
//         return power(x,n);
//     }
// };
double power(double x,long long n){
    if(n==0)return 1;
    if(n<0){
        x=1/x;
        n=-n;
    }
    double half=power(x,n/2);
    if(n%2==0){
        return half*half;
    }
    else{
        return half*half*x;
    }
}
    double myPow(double x, int n) {
       return power(x,n);
    }
};

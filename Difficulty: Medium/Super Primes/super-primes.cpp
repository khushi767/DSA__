class Solution {
  public:
    int superPrimes(int n) {
        if(n<5)return 0;
        vector<bool>isprime(n+1,true);
        isprime[0]=isprime[1]=false;
        for(int i=2;i*i<=n;i++){
            if(isprime[i]){
                for(int j=i*i;j<=n;j+=i)
                isprime[j]=false;
            }
        }
        int count=0;
        for(int i=3;i<=n;i++){
            if(isprime[i]&&isprime[i-2])
            count++;
        }
        return count;

    }
};

/*
Time complexity : - O(n*log(log(n)))- Due to the use fo sieve of eratosthenis.
Auxiliary Space:- O(n) - due to the array used to store primes upro n.
*/
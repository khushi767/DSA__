class Solution {
  public:
    vector<int> sieve(int n) {
        // code here
        vector<bool>isprime(n+1,true);
        isprime[0]=false;
        for(int i=2;i*i<=n;i++){
            for(int j=i*i;j<=n;j+=i){
                isprime[j]=false;
            }
        }
        
    
    vector<int>primes;
    for(int i=2;i<=n;i++){
        if(isprime[i])primes.push_back(i);
    }
    return primes;
    }
};
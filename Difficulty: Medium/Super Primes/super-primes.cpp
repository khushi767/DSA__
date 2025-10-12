// User function template for C++
class Solution {
  public:
    int superPrimes(int n) {
        // Step 1: Generate all primes up to n using Sieve of Eratosthenes
        vector<bool> isPrime(n+1, true);
        isPrime[0] = isPrime[1] = false;
        for(int i = 2; i * i <= n; i++) {
            if(isPrime[i]) {
                for(int j = i * i; j <= n; j += i)
                    isPrime[j] = false;
            }
        }

        // Step 2: Collect all primes
        vector<int> primes;
        for(int i = 2; i <= n; i++) {
            if(isPrime[i]) primes.push_back(i);
        }

        // Step 3: Check for super primes
        int count = 0;
        for(int p : primes) {
            for(int q : primes) {
                if(q >= p) break;  // avoid duplicates and unnecessary checks
                if(isPrime[p - q]) { // check if (p - q) is also prime
                    count++;
                    break; // count each super prime once
                }
            }
        }

        return count;
    }
};

/*class Solution {
  public:
    vector<int> threeDivisors(vector<long long> query, int q) {
        // Write your code here
        int count=0;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                count++;
            }
        }
        int total=count;
        if(total==3)
    }
};*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> threeDivisors(vector<long long> query, int q) {
        int MAX = 1e6; // because sqrt(10^12) = 10^6
        vector<bool> isPrime(MAX + 1, true);
        isPrime[0] = isPrime[1] = false;

        // Step 1: find all primes (Sieve of Eratosthenes)
        for (int i = 2; i * i <= MAX; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j <= MAX; j += i)
                    isPrime[j] = false;
            }
        }

        // Step 2: store all squares of primes
        vector<long long> primeSquares;
        for (int i = 2; i <= MAX; i++) {
            if (isPrime[i])
                primeSquares.push_back(1LL * i * i);
        }

        // Step 3: for each query, count squares <= n
        vector<int> result;
        for (int i = 0; i < q; i++) {
            long long n = query[i];
            int count = upper_bound(primeSquares.begin(), primeSquares.end(), n) - primeSquares.begin();
            result.push_back(count);
        }

        return result;
    }
};
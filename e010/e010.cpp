#include <algorithm>
#include <iostream>
#include <functional>
#include <numeric>
#include <cmath>
#include <vector>
#define FOR(v, a, b, c) for(int v = a; v < b; v += c)

using namespace std;

vector<int> computePrimes(int N) {
  vector<int> primes = { 2 };
  FOR(i, 3, N, 1) {
    bool isPrime = true;
    FOR(j, 0, primes.size(), 1) {
      if (primes[j] > sqrt(i) + 10) {
        break;
      }

      if (i % primes[j] == 0) {
        isPrime = false;
        break;
      }
    }
    if (isPrime) {
      primes.push_back(i);
    }
  }
  return primes;
}


int main() {
  int N = 2000000;
  vector<int> primes = computePrimes(N);
  long long acc = accumulate(primes.begin(), primes.end(), 0LL);
  cout << acc << endl; // computs sum of any iterable thing
}

#include <vector>
#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;
int main() {
  vector<int> primes;
  primes.push_back(2);

  for(int i = 3; i < 6000000; i += 2) {
    bool isPrime = true;
    for(int j = 0; j < primes.size(); j++) {
      if (primes.at(j) > sqrt(i) + 1) break;

      if (i % primes.at(j) == 0) {
        isPrime = false;
        break;
      }
    }
    if (isPrime) {
      primes.push_back(i);
    }
  }

  cout << primes[10000] << endl;
}

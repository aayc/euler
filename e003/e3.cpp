#include <vector>
#include <cmath>
#include <iostream>
using namespace std;

int main() {
  vector<int> primes;
  primes.push_back(2);

  for(int i = 3; i < 1000000; i += 2) {
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

  /*for (int i = 0; i < primes.size(); i++) {
    cout << primes.at(i) << ' ';
  }
  cout << endl;*/
  long long N = 600851475143;
  for (int i = primes.size() - 1; i >= 0; i--) {
    if (N % primes[i] == 0) {
      cout << primes[i] << endl;
      break;
    }
  }
}



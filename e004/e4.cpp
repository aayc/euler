#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(string s) {
  for(int i = 0; i < s.length() / 2; i++) {
    if(s.at(i) != s.at(s.length() - i - 1)) {
        return false;
    }
  }
  return true;
}

int main() {
  int max_prod = 0;
  for(int i = 100; i < 1000; i++) {
    for(int j = 100; j < 1000; j++) {
      string s = to_string(i * j);
      if(isPalindrome(s)) {
        max_prod = max(max_prod, i*j);
      }
    }
  }
  cout << max_prod << endl;
}

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
  int N = 1000;
  for(int a = 1; a <= N; a++) {
    for(int b = 1; b <= N; b++) {
      int c = a*a + b*b;
      int root = round(sqrt(c));
      if (root * root != c) continue;
      //cout << a << ' ' << b << ' ' << c << endl;

      if (a + b + root == 1000) {
        cout << a * b * root << endl;
        break;
      }
    }
  }
}


#include <iostream>
using namespace std;
int main() {
  int i = 2000;
  while (true) {
    bool good = true;
    for(int j = 3; j <= 20; j ++) {
      if (i % j != 0) {
        good = false;
        break;
      }
    }
    if (good) {
      break;
    }

    i += 2;
  }
  cout << i << endl;
}



#include <iostream>
#include <algorithm>
#include <cmath>
#include <stream>
#include <string>
#include <fstream>

using namespace std;

int main() {
  ifstream f("n.txt");
  string s;
  while(get_line(f, s)) {
    cout << s << endl;
  }

}

#include <iostream>
using namespace std;

int main() {
  string amigo[] = {"joão", "maria", "pedro", "ana"};
  int n = 4;
  int passes = 8;
  int quem = passes % n;
  cout << amigo[quem] << "\n";
  return 0;
}

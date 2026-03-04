#include <iostream>

using namespace std;

int main() {
  int arcos[] = {10, 20, 30};
  int n = 3;

  for (int i = 0; i < 6; i++) {
    cout << "passos " << i << ": peguei o valor " << arcos[i % n] << "\n";
  }
  return 0;
}

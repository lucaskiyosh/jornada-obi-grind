#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int a, b;
  cin >> a >> b;
  while (b) {
    a %= b;
    swap(a, b);
    cout << a << "\n";
  }
  return 0;
}

#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--) {
    int a, b;
    cin >> a >> b;

    int resto = a % b;
    if (resto == 0) {
      cout << 0 << "\n";
    } else {
      cout << b - resto << "\n";
    }
  }
  return 0;
}

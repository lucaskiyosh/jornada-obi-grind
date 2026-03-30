#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int xor_original = 0;
    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      xor_original ^= a;
    }
    if (n % 2 != 0) {
      cout << xor_original << "\n";
    } else {
      if (xor_original == 0) {
        cout << 0 << "\n";
      } else {
        cout << -1 << "\n";
      }
    }
  }
  return 0;
}

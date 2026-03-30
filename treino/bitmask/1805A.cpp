#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    bool achou = false;
    for (int x = 0; x < 256; x++) {
      int xor_total = 0;
      for (int i = 0; i < n; i++) {
        int bi = a[i] ^ x;
        xor_total ^= bi;
      }
      if (xor_total == 0) {
        cout << x << "\n";
        achou = true;
        break;
      }
    }
    if (!achou) {
      cout << -1 << "\n";
    }
  }
  return 0;
}

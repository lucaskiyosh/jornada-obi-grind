#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    int a, b, c;
    cin >> a >> b >> c;
    bool ok = false;
    int novo_b = (a + b) / 2;
    if ((a + b) % 2 == 0 && novo_b >= b && novo_b % b == 0) {
      ok = true;
    }
    int novo_c = (b * 2) - a;
    if (novo_c >= c && novo_c % c == 0) {
      ok = true;
    }
    int novo_a = b - (c - b);
    if (novo_a >= a && novo_a % a == 0) {
      ok = true;
    }
    cout << (ok ? "YES" : "NO") << "\n";
  }
  return 0;
}

#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    long long x, y, c, d;
    cin >> x >> y >> c >> d;
    long long dy = d - y;

    if (d < y || c > (x + dy)) {
      cout << -1 << "\n";
    } else {
      long long movimentos = dy + (x + dy - c);
      cout << movimentos << "\n";
    }
  }
  return 0;
}

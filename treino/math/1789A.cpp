#include <iostream>
#include <numeric>
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
    bool possivel = false;
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        if (std::gcd(a[i], a[j]) <= 2) {
          possivel = true;
          break;
        }
      }
      if (possivel)
        break;
    }
    if (possivel) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
  return 0;
}

#include <iostream>
using namespace std;
using ll = long long;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--) {
    ll n, k, x;
    cin >> n >> k >> x;

    ll soma_minima = k * (k + 1) / 2;
    ll soma_maxima = n * (n + 1) / 2 - (n - k) * (n - k + 1) / 2;
    if (soma_minima <= x && x <= soma_maxima) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
  return 0;
}

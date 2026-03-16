#include <iostream>
using namespace std;
using ll = long long;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--) {
    ll n;
    cin >> n;

    for (int k = 2; k <= 30; k++) {
      ll divisor = (1LL << k) - 1;

      if (n % divisor == 0) {
        ll x = n / divisor;
        cout << x << "\n";
        break;
      }
    }
  }
  return 0;
}

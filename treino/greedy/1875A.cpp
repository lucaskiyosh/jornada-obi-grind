#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    ll a, b, n;
    cin >> a >> b >> n;
    vector<ll> v(n);
    for (ll &x : v) {
      cin >> x;
    }
    ll extra = 0;
    for (int i = 0; i < n; i++) {
      extra += min(a - 1, v[i]);
    }
    cout << extra + b << "\n";
  }
  return 0;
}

#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
ll pref[200002];
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    ll n, q;
    cin >> n >> q;
    vector<ll> v(n);
    for (ll &x : v) {
      cin >> x;
    }
    fill(pref, pref + n + 1, 0LL);
    for (ll i = 1; i <= n; i++) {
      pref[i] = pref[i - 1] + v[i - 1];
    }
    ll soma_total = pref[n];
    for (ll i = 0; i < n; i++) {
      ll l, r, k;
      cin >> l >> r >> k;
      ll soma_lr = pref[r] - pref[l - 1];
      ll nova_soma = soma_total - soma_lr + (r - l + 1) * k;
      if (nova_soma % 2 == 0) {
        cout << "NO\n";
      } else {
        cout << "YES\n";
      }
    }
  }
  return 0;
}

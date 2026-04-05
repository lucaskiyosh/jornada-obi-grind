#include <iostream>
#include <set>
using namespace std;
using ll = long long;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--) {
    ll a, b;
    ll kx, ky, qx, qy;
    cin >> a >> b;
    cin >> kx >> ky;
    cin >> qx >> qy;

    set<pair<ll, ll>> k;
    set<pair<ll, ll>> q;

    ll dx[] = {a, a, -a, -a, b, b, -b, -b};
    ll dy[] = {b, -b, b, -b, a, -a, a, -a};

    for (int i = 0; i < 8; i++) {
      ll ckx = kx + dx[i];
      ll cky = ky + dy[i];
      k.insert({ckx, cky});

      ll cqx = qx + dx[i];
      ll cqy = qy + dy[i];
      q.insert({cqx, cqy});
    }
    int ans = 0;
    for (auto &p : k) {
      if (q.count(p))
        ans++;
    }
    cout << ans << "\n";
  }
  return 0;
}

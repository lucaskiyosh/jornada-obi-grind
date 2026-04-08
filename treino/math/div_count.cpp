#include <iostream>
using namespace std;
using ll = long long;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll t;
  cin >> t;
  while (t--) {
    ll n;
    cin >> n;
    ll qtd = 0;
    for (ll i = 1; i * i <= n; i++) {
      if (n % i == 0) {
        if (i * i == n) {
          qtd++;
        } else {
          qtd += 2;
        }
      }
    }
    cout << qtd << "\n";
  }
  return 0;
}

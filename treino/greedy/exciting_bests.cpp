#include <iostream>
using namespace std;
using ll = long long;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    ll x, y;
    cin >> x >> y;

    if (x == y) {
      cout << "0 0\n";
    } else {
      ll g = abs(x - y);        // impede de dar negativo
      ll r = x % g;             // calcula o proximo MDC pra baixo
      ll moves = min(r, g - r); // calcula o proximo MDC pra cima

      cout << g << " " << moves << "\n";
    }
  }
  return 0;
}

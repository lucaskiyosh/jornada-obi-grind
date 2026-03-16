#include <iostream>
using namespace std;
using ll = long long;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll n;
  if (!(cin >> n))
    return 0;

  ll r = 3;
  ll potencia = 1;

  for (int k = 1; k <= 38; k++) {
    potencia *= r;
    // formula (r^k -1) / (r -1)
    ll divisor = (potencia - 1) / (r - 1);

    if (k > 1 && divisor > 0 && n % divisor == 0) {
      ll x = n / divisor;
      cout << "Para K= " << k << ", x=" << x << "\n";
    }
  }
  return 0;
}

#include <iostream>
using namespace std;
using ll = long long;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll a, b;
  cin >> a >> b;
  ll a_original = a;
  ll b_original = b;

  while (b) {
    a %= b;
    swap(a, b);
  }
  ll mdc = a;
  ll mmc = (a_original / mdc) * b_original;
  cout << "MDC: " << mdc << "\n";
  cout << "MMC: " << mmc << "\n";
  return 0;
}

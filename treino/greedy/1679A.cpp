#include <iostream>
using namespace std;
using ll = long long;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    if (n % 2 == 0) {
      ll maximo = n / 4;
      ll minimo = (n + 5) / 6;
      cout << minimo << " " << maximo << "\n";
    } else {
      cout << -1 << "\n";
    }
  }
  return 0;
}

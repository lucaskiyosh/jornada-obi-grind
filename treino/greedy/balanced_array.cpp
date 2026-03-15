#include <bits/stdc++.h>
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

    if ((n / 2) % 2 != 0) {
      cout << "NO\n";
      continue;
    }
    cout << "YES\n";
    ;
    ll soma_pares = 0;

    for (int i = 1; i <= n / 2; i++) {
      ll par = i * 2;
      cout << par << " ";
      soma_pares += par;
    }

    ll soma_impares = 0;

    for (int i = 1; i < n / 2; i++) {
      ll impar = i * 2 - 1;
      cout << impar << " ";
      soma_impares += impar;
    }
    ll ultimo_impar = soma_pares - soma_impares;
    cout << ultimo_impar << "\n";
  }
  return 0;
}

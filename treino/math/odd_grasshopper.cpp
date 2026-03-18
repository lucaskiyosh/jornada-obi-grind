#include <cmath>
#include <iostream>
using namespace std;
using ll = long long;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--) {
    ll x, passos;
    cin >> x >> passos;

    ll restos = passos % 4;
    ll resposta = x;

    if (abs(x) % 2 == 0) {
      if (restos == 1) {
        resposta = x - passos;
      } else if (restos == 2) {
        resposta = x + 1;
      } else if (restos == 3) {
        resposta = x + passos + 1;
      }
    } else {
      if (restos == 1) {
        resposta = x + passos;
      } else if (restos == 2) {
        resposta = x - 1;
      } else if (restos == 3) {
        resposta = x - passos - 1;
      }
    }
    cout << resposta << "\n";
  }
  return 0;
}

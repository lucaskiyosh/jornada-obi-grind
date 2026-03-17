#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  int lado_maior = 0;
  int lado_menor = 0;

  while (t--) {
    int a, b;
    cin >> a >> b;
    lado_menor = min(a, b);
    lado_maior = max(a, b);

    int lado_quadrado = max(2 * lado_menor, lado_maior);
    cout << lado_quadrado * lado_quadrado << "\n";
  }
  return 0;
}

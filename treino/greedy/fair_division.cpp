#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int conta1 = 0;
    int conta2 = 0;
    int soma = 0;

    for (int i = 0; i < n; i++) {
      int peso;
      cin >> peso;
      if (peso == 1) {
        conta1++;
      } else {
        conta2++;
      }
      soma += peso;
    }

    if (soma % 2 != 0) {
      cout << "NO\n";
    } else {
      int metade = soma / 2;
      if (metade % 2 != 0 && conta1 == 0) {
        cout << "NO\n";
      } else {
        cout << "YES\n";
      }
    }
  }
  return 0;
}

#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;

    int ultimo_impar = n - (k - 1);
    int ultimo_par = n - 2 * (k - 1);

    if (ultimo_impar > 0 && ultimo_impar % 2 != 0) {
      cout << "YES\n";
      for (int i = 0; i < k; i++) {
        cout << "1 ";
      }
      cout << ultimo_impar << "\n";
    } else if (ultimo_par > 0 && ultimo_par % 2 == 0) {
      cout << "YES\n";

      for (int i = 0; i < k - 1; i++) {
        cout << "2 ";
      }
      cout << ultimo_par << "\n";
    } else {
      cout << "NO\n";
    }
  }
  return 0;
}

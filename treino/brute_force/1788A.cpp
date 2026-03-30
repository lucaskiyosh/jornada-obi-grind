#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    int n;
    int contagem_2 = 0;
    cin >> n;
    vector<int> a(n);

    for (int &x : a) {
      cin >> x;
      if (x == 2) {
        contagem_2++;
      }
    }
    if (contagem_2 % 2 != 0) {
      cout << -1 << "\n";
    } else if (contagem_2 == 0) {
      cout << 1 << "\n";
    } else {
      int contagem_simples = 0;
      for (int i = 0; i < n; i++) {
        if (a[i] == 2) {
          contagem_simples++;
        }
        if (contagem_simples == contagem_2 / 2) {
          cout << i + 1 << "\n";
          break;
        }
      }
    }
  }
  return 0;
}

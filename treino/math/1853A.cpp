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
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }
    int min_dif = 2e9;
    bool desorting = false;

    for (int i = 1; i < n; i++) {
      if (v[i] < v[i - 1]) {
        desorting = true;
        break;
      }
      int distancia_atual = v[i] - v[i - 1];
      min_dif = min(min_dif, distancia_atual);
    }
    if (desorting) {
      cout << 0 << "\n";
    } else {
      cout << (min_dif / 2) + 1 << "\n";
    }
  }
  return 0;
}

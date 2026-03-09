#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, m;
  if (!(cin >> n >> m))
    return 0;

  vector<int> proibido(n, 0);

  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    u--;
    v--;
    proibido[u] |= (1 << v);
    proibido[v] |= (1 << u);
  }

  int total_sanduiche = 0;
  int limite = (1 << n);

  for (int mask = 1; mask < limite; mask++) {
    bool valido = true;

    for (int i = 0; i < n; i++) {
      if ((mask & (1 << i)) != 0) {
        if ((mask & proibido[i]) != 0) {
          valido = false;
          break;
        }
      }
    }
    if (valido)
      total_sanduiche++;
  }
  cout << total_sanduiche << "\n";
  return 0;
}

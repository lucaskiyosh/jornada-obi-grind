#include <iostream>
#include <vector>

using namespace std;

int n, m;
vector<int> proibido;

int montar_sanduiche(int ingrediente_atual, int mascara_atual) {
  if (ingrediente_atual == n) {

    if (mascara_atual > 0)
      return 1;
    else
      return 0;
  }
  int total_sanduiche = 0;

  total_sanduiche += montar_sanduiche(ingrediente_atual + 1, mascara_atual);

  if ((mascara_atual & proibido[ingrediente_atual]) == 0) {
    int nova_mascara = mascara_atual | (1 << ingrediente_atual);
    total_sanduiche += montar_sanduiche(ingrediente_atual + 1, nova_mascara);
  }
  return total_sanduiche;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  if (!(cin >> n >> m))
    return 0;

  proibido.assign(n, 0);

  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;

    u--;
    v--;

    proibido[u] |= (1 << v);
    proibido[v] |= (1 << u);
  }
  cout << montar_sanduiche(0, 0) << "\n";
  return 0;
}

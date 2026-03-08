#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int l, c;
  if (!(cin >> l >> c))
    return 0;

  vector<vector<string>> grid(l, vector<string>(c));
  vector<ll> soma_linha(l);
  vector<ll> soma_coluna(c);

  set<string> var_unicas;

  for (int i = 0; i < l; ++i) {
    for (int j = 0; j < c; j++) {
      cin >> grid[i][j];
      var_unicas.insert(grid[i][j]);
    }
    cin >> soma_linha[i];
  }

  for (int j = 0; j < c; ++j) {
    cin >> soma_coluna[j];
  }

  map<string, ll> valores;
  size_t total_vars = var_unicas.size();

  while (valores.size() < total_vars) {

    for (int i = 0; i < l; ++i) {
      set<string> desconhecidas;
      string nome_desc = "";
      int qtd_desc = 0;
      ll soma_atual = 0;

      for (int j = 0; j < c; ++j) {
        string s = grid[i][j];
        if (valores.count(s)) {
          soma_atual += valores[s];
        } else {
          desconhecidas.insert(s);
          nome_desc = s;
          qtd_desc++;
        }
      }
      if (desconhecidas.size() == 1) {
        valores[nome_desc] = (soma_linha[i] - soma_atual) / qtd_desc;
      }
    }
    for (int j = 0; j < c; ++j) {
      set<string> desconhecidas;
      string nome_desc = "";
      int qtd_desc = 0;
      ll soma_atual = 0;

      for (int i = 0; i < l; ++i) {
        string s = grid[i][j];
        if (valores.count(s)) {
          soma_atual += valores[s];
        } else {
          desconhecidas.insert(s);
          nome_desc = s;
          qtd_desc++;
        }
      }
      if (desconhecidas.size() == 1) {
        valores[nome_desc] = (soma_coluna[j] - soma_atual) / qtd_desc;
      }
    }
  }
  for (auto const &[k, v] : valores) {
    cout << k << " " << v << "\n";
  }
  return 0;
}

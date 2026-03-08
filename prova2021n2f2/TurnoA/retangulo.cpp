#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  if (!(cin >> n))
    return 0;

  vector<long long> v(n);

  long long perimetro = 0;

  for (int i = 0; i < n; i++) {
    cin >> v[i];
    perimetro += v[i];
  }

  if (perimetro % 2 != 0) {
    cout << "N\n";
    return 0;
  }

  long long metade = perimetro / 2;
  long long soma_atual = 0;
  int r = 0;
  int contador_diametros = 0;
  // tecnica two pointers "janela deslizante"
  for (int l = 0; l < n; l++) {

    while (soma_atual < metade) {
      soma_atual += v[r % n];
      r++;
    }
    if (soma_atual == metade) {
      contador_diametros++;
    }
    soma_atual -= v[l];
  }

  if (contador_diametros >= 4) {
    cout << "S\n";
  } else {
    cout << "N\n";
  }
  return 0;
}

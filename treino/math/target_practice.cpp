#include <algorithm>
#include <iostream>
using namespace std;
int const tam = 10;
char alvo[tam][tam];

int local_ponto(int l, int c) {
  int dist_linha = min(l, 9 - l);
  int dista_coluna = min(c, 9 - c);
  return min(dist_linha, dista_coluna) + 1;
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    for (int i = 0; i < tam; i++) {
      for (int j = 0; j < tam; j++) {
        cin >> alvo[i][j];
      }
    }
    int pontos_total = 0;
    for (int i = 0; i < tam; i++) {
      for (int j = 0; j < tam; j++) {
        if (alvo[i][j] == 'X') {
          pontos_total += local_ponto(i, j);
        }
      }
    }
    cout << pontos_total << "\n";
  }
  return 0;
}

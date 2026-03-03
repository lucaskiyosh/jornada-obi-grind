#include <bits/stdc++.h>
using namespace std;

int busca(vector<int> &lista, int item) {
  int baixo = 0;
  int alto = lista.size() - 1;
  int res = -1;

  while (baixo <= alto) {
    int meio = baixo + (alto - baixo) / 2;

    if (lista[meio] == item) {
      res = meio;
      break;
    } else if (lista[meio] < item) {
      baixo = meio + 1;
    } else {
      alto = meio - 1;
    }
  }
  return res;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int item;
  int n;

  cin >> n;
  vector<int> v(n);

  for (int &x : v)
    cin >> x;

  cin >> item;

  sort(v.begin(), v.end());
  int result = busca(v, item);
  cout << result << "\n";
  return 0;
}

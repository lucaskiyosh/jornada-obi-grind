#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  vector<int> v(n);
  int menor_num = 1e9;
  for (int &x : v) {
    cin >> x;
    int distancia = abs(x);
    if (distancia < menor_num) {
      menor_num = distancia;
    }
  }
  cout << menor_num << "\n";
  return 0;
}

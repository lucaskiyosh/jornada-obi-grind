#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int soma = 0;
    for (int i = 0; i < n - 1; i++) {
      int pontos;
      cin >> pontos;
      soma += pontos;
    }
    cout << -soma << "\n";
  }
  return 0;
}

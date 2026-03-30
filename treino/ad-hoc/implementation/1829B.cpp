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

    int sequencia_max = 0;
    int sequencia_atual = 0;

    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      if (x == 0) {
        sequencia_atual++;
        sequencia_max = max(sequencia_max, sequencia_atual);
      } else {
        sequencia_atual = 0;
      }
    }
    cout << sequencia_max << "\n";
  }
  return 0;
}

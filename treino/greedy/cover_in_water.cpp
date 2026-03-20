#include <iostream>
#include <string>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int total_pontos = 0;
    int sequencia_atual = 0;
    int max_sequencia = 0;
    for (int i = 0; i < n; i++) {
      if (s[i] == '.') {
        total_pontos++;
        sequencia_atual++;
        max_sequencia = max(max_sequencia, sequencia_atual);
      } else {
        sequencia_atual = 0;
      }
      if (max_sequencia >= 3) {
        cout << 2 << "\n";
      } else {
        cout << total_pontos << "\n";
      }
    }
  }
  return 0;
}

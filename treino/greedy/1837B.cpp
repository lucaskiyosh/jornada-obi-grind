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
    string s;
    cin >> n >> s;
    int sequencia_max = 1;
    int sequencia_atual = 1;
    for (int i = 1; i < n; i++) {
      if (s[i] == s[i - 1]) {
        sequencia_atual++;
      } else {
        sequencia_atual = 1;
      }
      sequencia_max = max(sequencia_max, sequencia_atual);
    }
    cout << sequencia_max + 1 << "\n";
  }
  return 0;
}

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
    string s;
    cin >> s;

    int d = n - 1;
    int tamanho = n;
    for (int i = 0; i < n; i++) {
      if (i >= d) {
        break;
      }
      if (s[i] == s[d]) {
        break;
      } else {
        tamanho -= 2;
        d--;
      }
    }
    cout << tamanho << "\n";
  }
  return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    int freq[256] = {};
    string s, g;
    cin >> s >> g;

    int n = s.size() - 1;

    for (int i = 0; i < (int)g.size(); i++) {
      freq[(int)g[i]]++;
    }

    string res = "";

    for (int i = n; i >= 0; i--) {
      char letra_atual = s[i];

      if (freq[(int)letra_atual] > 0) {
        res += letra_atual;
        freq[(int)letra_atual]--;
      }
    }
    string final_res = "";
    for (int i = res.size() - 1; i >= 0; i--) {
      final_res += res[i];
    }

    if (final_res == g) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
  return 0;
}

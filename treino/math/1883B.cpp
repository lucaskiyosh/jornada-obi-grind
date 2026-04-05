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
    int n, k;
    string s;
    cin >> n >> k;
    cin >> s;

    int impares = 0;

    for (int i = 0; i < n; i++) {
      freq[(int)s[i]]++;
    }
    for (int i = 0; i < 256; i++) {
      if (freq[i] % 2 != 0) {
        impares++;
      }
    }
    if (impares - k <= 1) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
  return 0;
}

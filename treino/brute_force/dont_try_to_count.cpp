#include <iostream>
#include <string>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--) {
    int n, m;
    string x, s;
    cin >> n >> m;
    cin >> x >> s;
    bool achou = false;
    for (int i = 0; i <= 5; i++) {
      if ((int)x.find(s) != -1) {
        cout << i << "\n";
        achou = true;
        break;
      }
      x += x;
    }
    if (!achou) {
      cout << -1 << "\n";
    }
  }
  return 0;
}

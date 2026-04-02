#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    int n;
    int ops = 0;
    cin >> n;
    int x_anterior = 0;
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      if (i > 0) {
        if (x % 2 == x_anterior % 2) {
          ops++;
        }
      }
      x_anterior = x;
    }
    cout << ops << "\n";
  }
  return 0;
}

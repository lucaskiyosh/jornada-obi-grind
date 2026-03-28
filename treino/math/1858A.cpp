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

    int impares = 0;
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      if (x % 2 != 0) {
        impares++;
      }
    }
    if (impares % 2 == 0) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
  return 0;
}

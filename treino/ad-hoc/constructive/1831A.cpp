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
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      cout << (n + 1) - x << " ";
    }
    cout << "\n";
  }
  return 0;
}

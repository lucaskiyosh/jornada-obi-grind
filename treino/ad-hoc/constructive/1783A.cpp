#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio();
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    if (a[0] == a[n - 1]) {
      cout << "NO\n";
    } else {
      cout << "YES\n";
      cout << a[n - 1] << ' ';
      for (int i = 0; i < n - 1; i++) {
        cout << a[i] << (i == n - 2 ? "" : " ");
      }
      cout << "\n";
    }
  }
  return 0;
}

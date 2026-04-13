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
    vector<int> v(n);
    for (int &x : v) {
      cin >> x;
    }
    int ans = v[n - 1] - v[0];
    for (int i = 0; i < n - 1; i++) {
      ans = max(ans, v[i] - v[i + 1]);
      ans = max(ans, v[n - 1] - v[i]);
      ans = max(ans, v[i + 1] - v[0]);
    }
    cout << ans << "\n";
  }
  return 0;
}

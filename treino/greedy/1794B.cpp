#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
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
    if (v[0] == 1) {
      v[0]++;
    }
    for (int i = 1; i < n; i++) {
      if (v[i] == 1) {
        v[i]++;
      }
      if (v[i] % v[i - 1] == 0) {
        v[i]++;
      }
    }
    int idx = 0;
    for (int &x : v) {
      cout << x << (idx == n - 1 ? "" : " ");
      idx++;
    }
    cout << "\n";
  }
  return 0;
}

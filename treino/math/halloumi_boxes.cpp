#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int &x : v) {
      cin >> x;
    }
    if (k > 1 || is_sorted(v.begin(), v.end())) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
  return 0;
}

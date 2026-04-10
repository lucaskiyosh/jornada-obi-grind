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
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &x : v) {
      cin >> x;
    }
    int g = 0;
    for (int i = 1; i < n; i++) {
      int d = abs(v[i] - (i + 1));
      g = __gcd(g, d);
    }
    cout << g << "\n";
  }
  return 0;
}

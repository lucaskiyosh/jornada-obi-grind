#include <bits/stdc++.h>
using namespace std;
int p[200010];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
      cin >> p[i];
    }

    int m = 0;
    while (m < n && p[m] == n - m)
      m++;

    if (m == n) {
      for (int i = 0; i < n; i++) {
        cout << p[i] << ' ';
      }
    } else {
      int target = n - m;
      int k = find(p, p + n, target) - p;
      reverse(p + m, p + k + 1);
      for (int i = 0; i < n; i++) {
        cout << p[i] << ' ';
      }
    }
    cout << "\n";
  }
  return 0;
}

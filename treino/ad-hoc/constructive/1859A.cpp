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
    vector<int> a(n);
    for (int &x : a) {
      cin >> x;
    }
    sort(a.begin(), a.end());
    if (a[0] == a[n - 1]) {
      cout << -1 << "\n";
      continue;
    }
    vector<int> b, c;
    int maior_numero = a[n - 1];

    for (int x : a) {
      if (x == maior_numero) {
        c.push_back(x);
      } else {
        b.push_back(x);
      }
    }
    cout << b.size() << " " << c.size() << "\n";

    for (int x : b) {
      cout << x << " ";
    }
    cout << "\n";

    for (int x : c) {
      cout << x << " ";
    }
    cout << "\n";
  }
  return 0;
}

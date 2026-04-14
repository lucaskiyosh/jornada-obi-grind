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
    int opr = 0;
    bool possivel = true;
    for (int i = n - 2; i >= 0; i--) {
      while (v[i] >= v[i + 1] && v[i] > 0) {
        v[i] /= 2;
        opr++;
      }
      if (v[i] >= v[i + 1]) {
        possivel = false;
        break;
      }
    }
    if (possivel) {
      cout << opr << "\n";
    } else {
      cout << -1 << "\n";
    }
  }
  return 0;
}

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
    int ilhas = 0;
    bool dentro = false;
    for (int i = 0; i < n; i++) {
      if (v[i] != 0) {
        if (dentro == false) {
          ilhas++;
          dentro = true;
        }
      } else {
        dentro = false;
      }
    }
    if (ilhas >= 2) {
      cout << 2 << "\n";
    } else if (ilhas == 1) {
      cout << 1 << "\n";
    } else {
      cout << 0 << "\n";
    }
  }
  return 0;
}

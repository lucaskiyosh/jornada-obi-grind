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
    } // usando a olhada pro lado!
    int ilhas = 0;
    for (int i = 1; i < n; i++) {
      if (v[i] != 0 && (i == 0 || v[i - 1] == 0))
        ilhas++;
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

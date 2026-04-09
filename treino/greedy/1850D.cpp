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
    sort(v.begin(), v.end());
    int atual = 1;
    int recorde = 1;
    for (int i = 1; i < n; i++) {
      if (v[i] - v[i - 1] > k) {
        atual = 1;
      } else {
        atual++;
      }
      recorde = max(recorde, atual);
    }
    cout << abs(recorde - n) << "\n";
  }
  return 0;
}

#include <algorithm>
#include <iostream>
using namespace std;
int arr[52];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    sort(arr, arr + n);
    bool pos = true;
    for (int i = 0; i < n - 1; i++) {
      if (arr[i + 1] - arr[i] > 1) {
        pos = false;
        break;
      }
    }
    if (pos) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
  return 0;
}

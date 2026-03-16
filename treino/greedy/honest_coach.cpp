#include <algorithm>
#include <iostream>
using namespace std;
int arr[1005];

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
    int menor_valor = 1e9;
    for (int i = 1; i < n; i++) {
      int menor_n = arr[i] - arr[i - 1];
      menor_valor = min(menor_valor, menor_n);
    }
    cout << menor_valor << "\n";
  }
  return 0;
}

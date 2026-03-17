#include <iostream>
using namespace std;
int arr[52];
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  int remendo = 0;
  while (t--) {
    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++) {
      cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
      int menor = min(arr[i], arr[i + 1]);
      int maior = max(arr[i], arr[i + 1]);

      while (menor * 2 < maior) {
        remendo++;
        menor = menor * 2;
      }
    }
    cout << remendo << "\n";
  }
  return 0;
}

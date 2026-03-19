#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    vector<ll> s(n), f(n);
    for (int i = 0; i < n; i++)
      cin >> s[i];
    for (int i = 0; i < n; i++)
      cin >> f[i];

    for (int i = 0; i < n; i++) {
      ll inicio_real;
      if (i == 0) {
        inicio_real = s[i];
      } else {
        inicio_real = max(s[i], f[i - 1]);
      }
      ll duracao = f[i] - inicio_real;
      cout << duracao << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
  }
}

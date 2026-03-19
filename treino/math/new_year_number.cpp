#include <iostream>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    int restos = n % 2020;
    int qo = n / 2020;

    if (restos <= qo) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
  return 0;
}

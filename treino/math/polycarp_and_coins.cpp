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
    int c1 = 0;
    int c2 = 0;
    int pariedade = n / 3;
    c2 = pariedade;
    c1 = pariedade;
    int resto = n % 3;
    if (resto % 3 != 0) {
      if (resto == 1) {
        c1++;
      } else if (resto == 2) {
        c2++;
      }
    }
    cout << c1 << " " << c2 << "\n";
  }
  return 0;
}

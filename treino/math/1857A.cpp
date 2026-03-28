#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--) {
    int a, b, c;
    cin >> a >> b >> c;

    if (a + (c + 1) / 2 > b + c / 2) {
      cout << "First\n";
    } else {
      cout << "Second\n";
    }
  }
  return 0;
}

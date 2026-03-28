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
    vector<int> a(n);
    int positivo = 0;
    int negativo = 0;
    for (int &x : a) {
      cin >> x;
      if (x < 0) {
        negativo++;
      } else {
        positivo++;
      }
    }
    int ops = 0;
    while (negativo > positivo) {
      negativo--;
      positivo++;
      ops++;
    }
    if (negativo % 2 != 0) {
      ops++;
    }
    cout << ops << "\n";
  }
  return 0;
}

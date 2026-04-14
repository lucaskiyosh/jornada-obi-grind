#include <iostream>
#include <map>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    map<int, int> freq;
    int max_f = 0;

    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      freq[x]++;
      max_f = max(max_f, freq[x]);
    }
    int opr = 0;

    while (max_f < n) {
      opr++;

      int falta = n - max_f;
      int posso_pegar = max_f;

      if (posso_pegar > falta) {
        posso_pegar = falta;
      }
      opr += posso_pegar;
      max_f += posso_pegar;
    }
    cout << opr << "\n";
  }
  return 0;
}

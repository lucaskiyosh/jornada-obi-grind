#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string s, t;
  cin >> s >> t;

  int i = s.size() - 1;
  int j = t.size() - 1;
  int sufixo = 0;
  while (i >= 0 && j >= 0 && s[i] == t[j]) {
    sufixo++;
    i--;
    j--;
  }
  int result = (s.size() - sufixo) + (t.size() - sufixo);
  cout << result << "\n";
  return 0;
}

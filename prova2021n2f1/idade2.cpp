#include <algorithm>
#include <iostream>
using namespace std;
int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int maior = max({a, b, c});
  int menor = min({a, b, c});
  int result = (a + b + c) - maior - menor;
  cout << result << "\n";
  return 0;
}

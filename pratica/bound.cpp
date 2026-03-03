#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<int> v = {22, 40, 30, 50, 60, 33, 23, 32, 23, 23, 23, 23, 54};
  int item = 23;

  sort(v.begin(), v.end());

  auto inicio = lower_bound(v.begin(), v.end(), item);
  auto fim = upper_bound(v.begin(), v.end(), item);

  int qtd = fim - inicio;

  cout << qtd << "\n";
  return 0;
}

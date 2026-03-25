#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> idade(3);
  cin >> idade[0] >> idade[1] >> idade[2];

  sort(idade.begin(), idade.end());

  cout << idade[1] << "\n";

  return 0;
}

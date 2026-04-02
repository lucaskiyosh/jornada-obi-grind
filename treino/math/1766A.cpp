#include <iostream>
using namespace std;

int descobrir_digitos(int n, int &primeiro_digitos) {
  int digitos = 0;
  int temp = n;
  while (temp > 0) {
    primeiro_digitos = temp;
    temp /= 10;
    digitos++;
  }
  return digitos;
}

int main() {
  ios_base::sync_with_stdio();
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    int n2;
    cin >> n2;
    int primeiro = 9;
    int qtd_digitos = descobrir_digitos(n2, primeiro);
    int result = 9 * (qtd_digitos - 1) + primeiro;
    cout << result << "\n";
  }
  return 0;
}

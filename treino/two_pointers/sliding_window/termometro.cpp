#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int tempo[] = {30, 32, 28, 25, 27, 25, 33, 23, 33, 29, 32};
  int soma_atual = tempo[0] + tempo[1] + tempo[2];

  for (int i = 3; i < 11; i++) {
    soma_atual = soma_atual - tempo[i - 3] + tempo[i];

    cout << "soma da janela atual: " << soma_atual << endl;
  }
  return 0;
}

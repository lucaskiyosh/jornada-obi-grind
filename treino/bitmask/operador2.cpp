#include <bitset> // biblioteca para mostrar os zeros e uns bonitinho
#include <iostream>
#include <vector>

using namespace std;

void explicar_loop_combinacoes() {
  int n = 3;
  int total = (1 << n); // 2^3 = 8

  cout << "--- Desvendando o loop (1 << n) ---" << endl;
  cout << "Ingrediente: 3. Total de conbinações: " << total << endl;

  for (int mask = 0; mask < total; mask++) {
    cout << "Decimal: " << mask << " | Binario: " << bitset<3>(mask);
    cout << " | Ingredientes: ";

    for (int i = 0; i < n; i++) {
      int lanterna = (1 << i);

      if (mask & lanterna) {
        cout << i << " ";
      }
    }
    cout << endl;
  }
  cout << "--------------------------------------------------" << endl << endl;
}

void operador() {
  int prato = 0; // 0000
  cout << "--- Como funciona o |= ---" << endl;

  prato |= (1 << 0); //  prata vira 0001
  cout << "Coloquei o 0: " << bitset<4>(prato) << endl;

  prato |= (1 << 2); // prato vira 0101
  cout << "coloquei o 2: " << bitset<4>(prato) << endl;

  prato |= (1 << 0);
  cout << "tentei colocar o 0 de novo: " << bitset<4>(prato)
       << " (não muda nada!)" << endl;
  cout << "-----------------------------------" << endl << endl;
}

int main() {
  explicar_loop_combinacoes();
  operador();
  return 0;
}

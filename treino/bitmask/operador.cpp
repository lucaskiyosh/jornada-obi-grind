#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

void exemplo_operador_or() {
  int mask = 0; // vazio  (0000)

  mask |= (1 << 1);
  mask |= (1 << 3);

  cout << "---Operador |= ---" << endl;
  cout << "valor final da mask: " << mask << "(binario: 1010)" << endl << endl;
}

void exemplo_subset_enumerate() {
  int n = 3;
  string itens[] = {"pao", "queijo", "presunto"};

  cout << "---subset Enumero (Bitmask)---" << endl;
  for (int mask = 0; mask < (1 << n); mask++) {
    cout << "mask" << mask << ": [ ";
    for (int i = 0; i < n; i++) {
      if (mask & (1 << i)) {
        cout << itens[i] << " ";
      }
    }
    cout << "]" << endl;
  }
  cout << endl;
}

void backtraking_subsets(int item_atual, int n, vector<int> &escolha) {
  if (item_atual == n) {
    cout << "{ ";
    for (int x : escolha)
      cout << x << " ";
    cout << "}" << endl;
    return;
  }
  escolha.push_back(item_atual);
  backtraking_subsets(item_atual + 1, n, escolha);

  escolha.pop_back();
  backtraking_subsets(item_atual + 1, n, escolha);
}

void exemplo_validacao() {
  int mask = 7;
  int proibido[] = {0, 0, 0};

  proibido[0] |= (1 << 2);
  proibido[2] |= (1 << 0);

  cout << "---validação de Bitmask ---" << endl;
  bool valido = true;
  for (int i = 0; i < 3; i++) {
    if (mask & (1 << i)) {
      if (mask & proibido[i]) {
        valido = false;
        break;
      }
    }
  }
  cout << "sanduiche 111 e valido " << (valido ? "sim" : "não") << endl;
}

int main() {
  exemplo_operador_or();
  exemplo_subset_enumerate();

  cout << "--- backtraking (subset) ---" << endl;
  vector<int> escolha;
  backtraking_subsets(0, 3, escolha);
  cout << endl;

  exemplo_validacao();

  return 0;
}

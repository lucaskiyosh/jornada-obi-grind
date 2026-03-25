#include <iostream>
#include <string>
using namespace std;
string alfabeto = "abcdefghijklmnopqrstuvxz";
string vogais = "aeiou";

char achar_vogais(int pos_consoante) {
  int indice_v[5] = {0, 4, 8, 14, 20};
  int distancia_minima = 1e9;
  char vogal_escolhida = 'a';

  for (int i = 0; i < 5; i++) {
    int distancia = abs(indice_v[i] - pos_consoante);
    if (distancia < distancia_minima) {
      distancia_minima = distancia;
      vogal_escolhida = alfabeto[indice_v[i]];
    }
  }
  return 0;
}
char proxima_consoante(int pos_consoante) {
  if (alfabeto[pos_consoante] == 'z') {
    return 'z';
  }
  for (int i = pos_consoante + 1; i < (int)alfabeto.size(); i++) {
    if (vogais.find(alfabeto[i]) == string::npos) {
      return alfabeto[i];
    }
  }
  return 'z';
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string p;
  if (cin >> p) {
    string palavra_cifrada = "";
    for (char c : p) {
      if (vogais.find(c) != string::npos) {
        palavra_cifrada += c;
      } else {
        int pos_alfabeto = alfabeto.find(c);
        palavra_cifrada += c;
        palavra_cifrada += achar_vogais(pos_alfabeto);
        palavra_cifrada += proxima_consoante(pos_alfabeto);
      }
    }
    cout << palavra_cifrada << "\n";
  }
  return 0;
}

#include <iostream>
using namespace std;
int tempo_total[105];
int recebido_em[105];
bool esperando[105];
bool interagio[105];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  int relogio = 0;
  char evento_anterior = ' ';

  for (int i = 0; i < n; i++) {
    char s;
    int x;
    cin >> s >> x;

    if (s == 'R' || s == 'E') {
      if (evento_anterior == 'R' || evento_anterior == 'E') {
        relogio++;
      }
      interagio[x] = true;
    } else if (s == 'T') {
      relogio += x;
    }
    if (s == 'R') {
      recebido_em[x] = relogio;
      esperando[x] = true;
    } else if (s == 'E') {
      tempo_total[x] += (relogio - recebido_em[x]);
      esperando[x] = false;
    }
    evento_anterior = s;
  }
  for (int i = 1; i <= 100; i++) {
    if (interagio[i]) {
      if (esperando[i]) {
        cout << i << " -1\n";
      } else {
        cout << i << " " << tempo_total[i] << "\n";
      }
    }
  }
  return 0;
}

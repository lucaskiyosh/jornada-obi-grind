#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int freq[1000001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, s;
    cin >> n >> s;

    int soma = 0;
    ll total= 0;
    freq[0] = 1;

    for (int i = 0; i < n; i++){
        int chuva;
        cin >> chuva;

        soma += chuva;
        int alvo = soma -s;

        if (alvo >= 0) {
            total += freq[alvo];
        }
        freq[soma]++;
    }
    cout << total << "\n";
    return 0;
}
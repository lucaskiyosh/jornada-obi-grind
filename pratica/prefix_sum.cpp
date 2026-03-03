#include <bits/stdc++.h>

using namespace std;

vector<int> construir_prefix(const vector<int> &arr) {
    int n = arr.size();
    vector<int> prefix(n, 0);

    prefix[0] = arr[0];

    for (int i = 1; i < n; i++) {

        prefix[i] = prefix[i -1] + arr[i];
    }
    return prefix;
}

int soma_rapida(const vector<int> &prefix, int a, int b) {
    if (a == 0) {
        return prefix[b];
    }
    return prefix[b] - prefix[a - 1];
}

int main() {
    vector<int> arr = {0, 1, 6, 4, 2, 5, 3};
    int a = 2;
    int b = 5;

    vector<int> prefix = construir_prefix(arr);

    int resultado = soma_rapida(prefix, a, b);

    cout << resultado << "\n";
    return 0;
}


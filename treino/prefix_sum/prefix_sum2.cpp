#include <bits/stdc++.h>

using namespace std;

vector<int> construir_prefix(const vector<int> &arr) {
    int n = arr.size();
    vector<int> prefix(n + 1, 0);

    for (int i = 0; i < n; i++) {

        prefix[i +1] = prefix[i] + arr[i];
    }
    return prefix;
}

int soma_rapida(const vector<int> &prefix, int a, int b) {
    return prefix[b+1] - prefix[a];
}

int main() {
    vector<int> arr = {0, 1, 6, 4, 2, 5, 3};
    int a = 0;
    int b = 3;

    vector<int> prefix = construir_prefix(arr);

    int resultado = soma_rapida(prefix, a, b);

    for (int i = 0; i < (int)prefix.size(); i++) {
    cout << prefix[i] << " ";
    }
    cout << "\n";

    cout << resultado << "\n";
    return 0;
}


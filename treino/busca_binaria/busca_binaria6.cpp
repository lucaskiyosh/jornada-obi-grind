#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int item;
    int n;
    cin >> n;

    vector<int> v(n);

    for (int& i : v)
        cin >> i;

    cin >> item;

    auto it = lower_bound(v.begin(), v.end(), item);

    if (it != v.end() && *it == item) {
        cout << "achei.. na posição: " << (it - v.begin()) << " e o valor é: " << *it << "\n";
    } else {
        cout << "achei não..." << "\n";
    }
    return 0;
}
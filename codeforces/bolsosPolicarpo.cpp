#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> freq(101, 0);

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }

    int resposta = 0;

    for (int i = 0; i <= 100; i++) {
        resposta = max(resposta, freq[i]);
    }

    cout << resposta << endl;
}

/*
Como eu poderia ter feito:

int main() {
    int n, x, aux = 0;
    cin >> n;

    vector<int> freq(101);

    while (n--) {
        cin >> x;
        aux = max(ans, ++freq[x]);
    }

    cout << aux << endl;
}

    Obs:. ++freq[x] != freq[x]++
*/
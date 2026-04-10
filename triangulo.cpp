#include <bits/stdc++.h> // inclusão da biblioteca, que tem tudo que precisamos para rodar
#define endl '\n'
using namespace std; // evita termos que escrever std : em tudo


int main() {
    int n;
    int triangulo;
    int aux;
    int soma = 0;

    cin >> n; //ler entrada

    for (int i = 0; i < n; i++) {
        cin >> triangulo;
        aux = triangulo * 3;
        soma += aux;
    }

    cout << soma << endl;

    return 0;
}

// como poderia melhorar:
// Eu poderia fazer direto: soma += triangulo * 3;
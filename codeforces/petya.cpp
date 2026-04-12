#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main () {
    string w1, w2;

    cin >> w1;
    cin >> w2;

    //o tolower serve para deixar tudo em minúsculo
    for (int i=0; i < w1.length(); i++){
        w1[i] = tolower(w1[i]);
        w2[i] = tolower(w2[i]);
    }

    //para substituir o for, eu poderia ter usado:
    //transform(w1.begin(), w1.end(), w1.begin(), ::tolower)
    //transform(w2.begin(), w2.end(), w2.begin(), ::tolower)

    cout << (w1 < w2 ? -1 : w1 > w2 ? 1 : 0);

    return 0;
}
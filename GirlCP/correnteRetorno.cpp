#include <bits/stdc++.h>
#include <cctype>
using namespace std;

#define op ios::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define endl '\n'

signed main() {
    op
    int lances, menor, maior, menorI, maiorI;
    bool condicao = true;
    int v[3];
    int rodada;
    cin >> rodada;
    
    for(int i=0; i < rodada; i++){
        menor = 100;        
        menorI = 0;
        maiorI = 0;
        maior = 0;
        lances = 0;

        for(int i=0; i < 3; i++){
            cin >> v[i];
        }

        while(1){
            if(v[0] == v[1] || v[0] == v[2] || v[1] == v[2]){
                break;
            }

            for(int i=0; i < 3; i++){
                if(v[i] < menor){
                    menor = v[i];
                    menorI = i;
                }
                if(v[i] > maior){
                    maior = v[i];
                    maiorI = i;
                }
            }

            v[menorI]++;
            v[maiorI]--;
            lances++;
        }

        cout << lances << endl;
    }
}
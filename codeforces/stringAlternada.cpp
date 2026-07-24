#include <bits/stdc++.h>
#include <cctype>
using namespace std;

#define op ios::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define endl '\n'

signed main() {
    int n;
    cin >> n;

    while(n--){
            char aux = 'c';
            int a = 0;
            int b = 0;
            int alternado = 0;
            int repetido = 0;
            int maior = 0;
            int indice = 0;
            char letraRep = 'c';
            
        string stg;
        cin >> stg;
        int tam = stg.size();

        for(int i = 0; i < tam; i++){
            if (stg[i] == 'a'){
                if(aux != stg[i]){
                    alternado++;
                    repetido = 0;
                } else {
                    repetido++;
                }

                a++;
            }

            if (stg[i] == 'b'){
                if(aux != stg[i]){
                    alternado++;
                    repetido = 0;
                } else {
                    repetido++;
                }

                b++;
            }

            aux = stg[i];
            if(maior == repetido+1){
                letraRep = stg[i];
                maior = maior;
                indice = indice;
            } else {
                maior = max(maior, repetido+1);
                indice = i;
            }
        }

        if((alternado) == tam){
            cout << "YES (já é alternado)" << endl;
        }

        if((alternado-1) != (tam/2)){
            cout << "NO" << endl;
        }
        
        cout << "alternando:" << alternado << endl;
        cout << "a: " << a << endl;
        cout << "b: " << b << endl;
        cout << "maior: " << maior << endl;
        cout << "maior letra repetida: " << letraRep << endl;
        cout << "indice: " << indice << endl;
    }
}
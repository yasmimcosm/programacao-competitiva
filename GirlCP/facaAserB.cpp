#include <bits/stdc++.h>
#include <cctype>
using namespace std;

#define op ios::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define endl '\n'

signed main() {
    op
    int t, operacoes=0;
    cin >> t;

    while(t--){
        int n, umA = 0, umB = 0, errado = 0;
        cin >> n;
        int a, b;
        vector<int> filaA;
        vector<int> filaB;

        for(int i =0; i <n; i++){
            cin >> a;
            filaA.push_back(a);
        }

        for(int i=0; i <n; i++){
            cin >> b;
            filaB.push_back(b);
        }

        for(int i=0; i<n; i++){
            if(filaA[i] != filaB[i]){
                errado++;
                if(filaA[i] == 1){
                    umA++;
                }
                if(filaB[i] == 1){
                    umB++;
                }
            }
        }

        if (errado == 1){
            cout << 1 << endl;
        } else if(umA == 0){
            cout << umB << endl;
        } else if(umB == 0){
            cout << umA << endl;
        }else {
            operacoes = abs(umA - umB) + 1;
            cout << operacoes << endl;
        }
    

    }
}
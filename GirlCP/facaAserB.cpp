#include <bits/stdc++.h>
#include <cctype>
using namespace std;

#define op ios::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define endl '\n'

signed main() {
    op
    int t, operacoes=0, diferenca=0;
    cin >> t;

    while(t--){
        int n, umA = 0, umB = 0;
        cin >> n;
        int a, b;
        vector<int> filaA;
        vector<int> filaB;

        for(int i =0; i <n; i++){
            cin >> a;
            if(a == 1){
                umA++;
            }
            filaA.push_back(a);
        }

        for(int i=0; i <n; i++){
            cin >> b;
            if(b == 1){
                umB++;
            }
            filaB.push_back(b);
        }

        for(int i=0; i <n; i++){
            if(filaA[i] != filaB[i]){
                diferenca++;
            }
        }

        if(filaA == filaB){
            cout << 0 << endl;
        } else if(umA == umB || diferenca == 1 || n ==1 || umA == 1 || umB == 1){
            cout << 1 << endl;
        } else {
            operacoes = abs(umA - umB) + 1;
            cout << operacoes << endl;
        }
    

    }
}
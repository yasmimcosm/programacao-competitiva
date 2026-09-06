#include <bits/stdc++.h>
#include <cctype>
using namespace std;

#define op ios::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define endl '\n'

signed main() {
    op
    int n;
    cin >> n;
    int soma = 0, aux = 0, quant =1;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
        soma += v[i];
    }
    sort(v.begin(), v.end());

    for(int i=n-1; i >= 0; i--){
        aux += v[i];
        if(aux > (soma/2)){
            cout << quant << endl;
            return 0;
        } else {
            quant++;
        }
    }
}
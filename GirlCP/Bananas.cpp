#include <bits/stdc++.h>
#include <cctype>
using namespace std;

#define op ios::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define endl '\n'

signed main() {
    op
    int n, k, w, emprestimo, aux = 0;
    cin >> k >> n >> w;
    for(int i=1; i <= w; i++){
        aux += k*i;
    }

    emprestimo = aux - n;

    if(emprestimo < 0){
        cout << 0 << endl;
    } else{
        cout << emprestimo << endl;
    }

}
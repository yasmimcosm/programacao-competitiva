#include <bits/stdc++.h>
#include <cctype>
using namespace std;

#define op ios::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define endl '\n'

signed main() {
    op
    vector <string> v = {"ana", "bia"};
    string nome = "ivan";
    set <char> con;
    for(auto x : v) {
        for(auto y : x) {
            con.insert(y);
        }
    }
    cout << con.size() << endl;
}

/*
    int esquerda = 0, direita = a.size() - 1;
    int lb = -1;
    while(esquerda <= direita){
        int meio = (esquerda + direita)/2;
        if(a[meio] >= x){
          lb = meio;
          r = m - 1;
        }else{
          l = m + 1;
        }
    }
*/  
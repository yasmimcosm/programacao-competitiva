#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
    string a, b;
    cin >> a >> b;

    vector<string> cima, baixo, dupla, vazio;

    for(int i=0; i < a.size(); i++){
        string col = "";
        col += a[i];
        col += b[i];

        if(col == "#."){
            cima.push_back(col);
        }
        if(col == ".#"){
            baixo.push_back(col);
        }
        if(col == "##"){
            dupla.push_back(col);
        }
        if(col == ".."){
            vazio.push_back(col);
        }
    }
    
    bool temCima = (!cima.empty() || !dupla.empty());
        
    bool temBaixo = (!baixo.empty() || !dupla.empty());

    if (temCima && temBaixo && dupla.empty()) {
        cout << "NO" << endl;
            return 0;
    }

    vector<string> ordem;

        
    for (auto &c : cima)
        ordem.push_back(c);

    for (auto &c : dupla)
        ordem.push_back(c);

    for (auto &c : baixo)
        ordem.push_back(c);

    for (auto &c : vazio)
        ordem.push_back(c);
    
    string r1="", r2="";

    for (auto &c : ordem) {
        r1 += c[0];
        r2 += c[1];
    }

    cout << "YES" << endl;
    cout << r1 << endl;
    cout << r2 << endl;

    return 0;
}
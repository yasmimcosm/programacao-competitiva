#include <bits/stdc++.h>
using namespace std;

#define op ios::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define endl '\n'

signed main() {
    op
    
    int n; cin >> n;

    vector<char> p;
    int tamEsq = 0;
    int tamDir = 0;
    int dir = 1;
    int esq = 0;
    bool certo = true;

    for(int i=0; i<n; i++){
        char x; cin >> x;
        p.push_back(x);

        if(x == '('){
            tamDir++;
        } else {
            tamEsq++;
        }
    }

    if(p[0] == ')') {
        certo = false;
    } 
    if(tamDir != tamEsq){
        certo = false;
    }

    for(int i=1; i<n; i++){
        if(p[i] == '('){
            dir++;
        }
        if(p[i] == ')'){
            if(dir){
                dir--;
            } else {
                esq++;
            }
        }
    }

    if((dir != 0) || (esq != 0)){
        certo = false;
    }

    if(certo) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

}

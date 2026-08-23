#include <bits/stdc++.h>
#include <cctype>
using namespace std;

#define op ios::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define endl '\n'

signed main() {
    op
    int n, m = 2;
    cin >> n;
    int rodada = 0;
    bool cheio = true;
    vector<int> v(n);

    for(int i=0; i< n; i++){
        cin >> v[i];
    }

    while(cheio){
        if(v.size() > 2){
            if(gcd(v[0], v[1]) > 1){
            v.erase(v.begin() + 0);
            v.erase(v.begin() + 1);
            rodada++;
        } else {
            v.erase(v.begin() + 0);
            rodada++;
        } 

        if(v.empty()){
            cheio = false;
        }
    }

    cout << rodada << endl;
    }
}
#include <bits/stdc++.h>
#include <cctype>
using namespace std;

#define op ios::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define endl '\n'

signed main() {
    op
    int t;
    cin >> t;

    while(t--){
        bool vdd = true;
        int x, portas = 0, aux;
        cin >> x;
        vector<int> v;
        v.push_back(0);
        int a, b, c;
        cin >> a >> b >> c;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        for(int i=0; i< 2; i++){
            x = v[x];
            if(x == 0){
                vdd = false;
            }
        }
        if(vdd){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

}
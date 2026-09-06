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
        long long n, a, b, c, menor;
        cin >> n;
        long long x, aux;
        
        vector<long long> v;
        vector<long long> distancias;
        for(int i=0; i<n; i++){
            cin >> x;
            v.push_back(x);
        }

        sort(v.begin(), v.end());
        menor = 1000000000000000;
        for(int i=0; i<n-2; i++){
            aux = (abs(v[i] - v[i+1]) + abs(v[i+1] - v[i+2]));
            if(aux < menor){
                a = v[i];
                b = v[i+1];
                c = v[i+2];
                menor = aux;
            }

        }

        cout << menor << endl;
    }

}
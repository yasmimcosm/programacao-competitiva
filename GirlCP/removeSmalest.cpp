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
        int n;
        cin >> n;
        bool resposta = true;
        vector<int> v(n);

        for(int i =0; i<n; i++ ){
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        for(int i =0; i<n-1; i++){
                if(abs(v[i] - v[i+1]) > 1){
                    resposta = false;
                } 
            }

        if(!resposta) cout << "NO" << endl;
        else cout << "YES" << endl;
        
    }
}
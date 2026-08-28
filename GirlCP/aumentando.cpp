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
        int n;
        cin >> n;
        vector<int> v(n);

        for(int i=0; i < n; i++){
            cin >> v[i];
        }

        sort(v.begin(), v.end(), greater<int>());

        for(int i=0; i<v.size()-1; i++){
            if(v[i] == v[i+1]){
                vdd = false;
            }
        }
        
        if (v.size() == 1) vdd = vdd;
        if(vdd) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
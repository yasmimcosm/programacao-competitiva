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
        vector<int> v(3);
        for(int i=0; i<3;i++){
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        cout << v[1] << endl;
    }
}
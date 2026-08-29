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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for(int i=0; i < n; i++){
            cin >> v[i];
        }

        if(is_sorted(v.begin(), v.end())){
            cout << "YES" << endl;
        } else if (k > 1){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

}
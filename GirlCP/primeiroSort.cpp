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
        int x, y;
        cin >> x >> y;
        cout << min(x, y) << " " << max(x, y) << endl;
    }
}
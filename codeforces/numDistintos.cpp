#include <bits/stdc++.h>
using namespace std;

#define op ios::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define endl '\n'

signed main() {
    op

    int n; cin >> n;
    set<int> v;

    for(int i=0; i < n; i++){
        int x; cin >> x;
        v.insert(x);
    }

    
    cout << v.size() << endl;
    
}
#include <bits/stdc++.h>
#include <cctype>
using namespace std;

#define op ios::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define endl '\n'

signed main() {
    op

    set<long long> s;
    int n; cin >> n;
    
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        s.insert(x);
    }

    cout << s.size() - 1 << '\n';
}
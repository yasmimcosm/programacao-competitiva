#include <bits/stdc++.h>
#include <cctype>
using namespace std;

#define op ios::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define endl '\n'

signed main() {
    op
    int i = 13;

    vector<int> v = {10, 11, 12, 12, 12, 14, 15};

    auto it = upper_bound(v.begin(), v.end(), i);
    auto it2 = it - 1;

    int pos = it2 - v.begin();
    if(v[pos] != i){
        pos = pos+1;
    }

    cout << pos << endl;
}
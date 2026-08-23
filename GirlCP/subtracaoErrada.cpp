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
    int n;
    cin >> n;
    while(n--){
        if((t%10) == 0){
            t = t/10;
        } else {
            t--;
        }

    }

    cout << t << endl;
}
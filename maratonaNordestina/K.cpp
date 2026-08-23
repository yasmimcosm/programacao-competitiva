#include <bits/stdc++.h>
#include <cctype>
using namespace std;

#define op ios::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define endl '\n'

signed main() {
    op
    int a, x, resultado;
    cin >> a >> x;
    
    for(int i = 1; i < a*2; i++){
        if(((x* i - 1)% a == 0) && (x*i >= a)) {
            cout << i << endl;
            return 0;
        }
    }

    cout << "-1" << endl;
}
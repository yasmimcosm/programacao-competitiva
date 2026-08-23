#include <bits/stdc++.h>
#include <cctype>
using namespace std;

#define op ios::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define endl '\n'

signed main() {
    op

    int tengo = 0, lengo = 0;
    int n;
    cin >> n;
    int t=1;

    while(n--){
        if(t == 1){
            tengo += 1;
            t++;
        } else {
            if(t%2==0){
                lengo += t;
                t++;
            } else {
                tengo += t;
                t++;
            }
        }
    }

    if (abs(tengo - lengo) % 2 == 0) {
        cout << "PAR\n";
    } else {
        cout << "IMPAR\n";
}
}
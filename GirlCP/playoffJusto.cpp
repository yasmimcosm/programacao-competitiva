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
        vector<int> v(4);
        vector<int> a(2);
        vector<int> b(2);
        for(int i=0; i<4; i++){
            cin >> v[i];
            if(i>1){
                b[i - 2] = v[i];
            } else {
                a[i] = v[i];
            }
        }

        int count = 0;
        sort(v.begin(), v.end());

        for(int i=0; i<2; i++){
            if(v[3] == a[i] || v[2] == a[i]){
                count++;
            }
        }

        if(count == 0 || count == 2){
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}
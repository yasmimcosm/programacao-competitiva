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
        string s;
        cin >> s;

        string o = "abc";
        int num = 0;
        for(int i=0; i<3; i++){
            if(s[i] != o[i]){
                num++;
            }
        }

        if(num > 2){
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}
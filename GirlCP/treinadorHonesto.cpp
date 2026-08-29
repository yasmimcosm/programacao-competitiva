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
        int n;
        cin >> n;
        int res = 0;

        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        int mini = 1000000000000;


        if (adjacent_find(v.begin(), v.end()) != v.end()) {
            mini = 0;
        } else {
            for(int i=0; i<n-1; i++){
                mini = min(mini, abs(v[i+1] - v[i]));
            }
        }

        cout << mini << endl;
    }
}
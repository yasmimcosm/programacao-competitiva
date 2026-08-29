#include <bits/stdc++.h>
#include <cctype>
using namespace std;

#define op ios::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define endl '\n'

signed main() {
    op
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    int problemas = 0;
    for(int i=0; i<n; i+= 2){
        if(v[i] != v[i+1]){
            problemas += v[i+1] - v[i];
        }
    }

    cout << problemas << endl;
}
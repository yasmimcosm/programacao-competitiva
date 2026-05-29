#include <bits/stdc++.h>
using namespace std;

#define op ios::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define endl '\n'

signed main() {
    op

    int n, c; cin >> n >> c;
    vector<pair<int,int>> crias;

    for(int i = 0; i < n; i++){
        int x; cin >> x;
        crias.push_back({x,i+1});
    }

    int temp = 0;
    int aux = 0;

    while(!(crias.empty())){
        aux = crias[temp].second;

        crias[temp].first = crias[temp].first - c;

        if(crias[temp].first <= 0){
            crias.erase(crias.begin());

        } else {
            crias.push_back(crias[temp]);
            crias.erase(crias.begin());
        }

    }

    cout << aux << endl;
}
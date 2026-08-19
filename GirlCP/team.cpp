#include <bits/stdc++.h>
#include <cctype>
using namespace std;

#define op ios::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define endl '\n'

signed main() {
    op

    int n, questoes = 0; 
    cin >> n;

    while(n--){
        int certezas = 0;
        vector<int> v(3);
        for(int i=0; i<3; i++){
            cin >> v[i];
            if(v[i] == 1){
                certezas++;
            }
        }

        if(certezas >= 2){
            questoes++;
        }
    }

    cout << questoes << endl;
}
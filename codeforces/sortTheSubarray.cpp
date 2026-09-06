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
        vector<int> v1(n);
        vector<int> v2(n);
        for(int i=0; i<n; i++){
            cin >> v1[i];
        }
        for(int i=0; i<n; i++){
            cin >> v2[i];
        }

        int ini = 0, fim = 0;

        bool nComecou = true;
            for(int i=0; i< n-1; i++){
                if(v2[i] <= v2[i+1] ){
                    if(nComecou){
                        ini = i+1;
                        fim = i+2;
                        nComecou = false;
                    } else {
                        fim = i+2;
                    }
                }
            }
        
        set<int> s(v2.begin(), v2.end());

        if(s.size() == 1){
            cout << "1" << " sla" << n << endl;
        } else {
            cout << ini << " " << fim << endl;
        }

    }
}

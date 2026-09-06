#include <bits/stdc++.h>
#include <cctype>
using namespace std;

#define op ios::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define endl '\n'

signed main() {
    op

    int ano;
    cin >> ano;
    ano++;
    int count = 1;
    while(1){
        string s = to_string(ano);
        set<char> distintos(s.begin(), s.end());
        if(distintos.size() == s.size()){
            cout << s << endl;
            return 0;
        } else{
            ano++;
        }
    }
}

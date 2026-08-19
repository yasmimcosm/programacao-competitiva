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
    int total = 0;

    while(n--){
        string s;
        cin >> s;
        int soma = 0, sub = 0;
        
        for(int i = 0; i < 3; i++){
            if (s[i] == '+'){
                soma++;
            }
            if(s[i] == '-'){
                sub++;
            }
        }

        if(soma){
            total++;
        } else {
            total--;
        }
    }

    cout << total << endl;
}
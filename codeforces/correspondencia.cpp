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
        int contador = 1;
        int zeros = 0;
        string s;
        cin >> s;
        if(s[0] == '0'){
            contador = 0;
        } else {
           for(int i=0; i < s.size(); i++){
                if(s[i] == '?' && i == 0){
                    contador *= 9;
                } 
                if(s[i] == '?' && i > 0){
                    contador *= 10;
                }
        }
        }

        cout << contador << endl;
    }
}
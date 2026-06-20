#include <bits/stdc++.h>
#include <cctype>
using namespace std;

#define op ios::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define endl '\n'

signed main() {
    op
    string s; cin >> s;
    string f;

    sort(s.begin(), s.end());

    reverse(s.begin(), s.end());

    int tam = s.size();
    bool nnpronto = true;

    while(nnpronto){
        int count = 0;

        while(!(s.empty())){
            int i = 0;
            if(s[i] != 'z' && s[i] == s[i+1]){
                f.push_back(s[i] + 1);
                s.erase(s.begin());
                s.erase(s.begin());

            } else {
                f.push_back(s[i]);
                s.erase(s.begin());
            }
        }
        
        int tamf = f.size();

        for(int i=0; i < tamf; i++) {
            if(f[i] != 'z' && f[i] == f[i+1]){
                count++;
            }
        }

        if(count){
            nnpronto = true;
            swap(s, f);
        } else {
            nnpronto = false;
        }
    }

    cout << f << endl;
}
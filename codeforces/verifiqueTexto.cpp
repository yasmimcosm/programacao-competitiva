#include <bits/stdc++.h>
using namespace std;

#define op ios::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define endl '\n'

signed main() {
    op

    int n; cin >> n;
    string f = "";

    for(int i = 0; i < n; i++){
        string s;
        cin >> s;

        if(i) f += ' ';
        f += s;
    }

    int m; cin >> m;
    vector<string> escrito;
    bool capslock = false;

    while(m--){
        string x; cin >> x;
        if(x == "CapsLock"){
            capslock = !capslock;

        } else if(x == "Backspace"){
            if(!escrito.empty()){
                escrito.pop_back();
            }

        } else if(x == "Space") {
            string space = " ";
            escrito.push_back(space);

        } else {
            if(capslock){
                escrito.push_back(x);
                escrito.back().back() = toupper(escrito.back().back());
            } else {
                escrito.push_back(x);
                escrito.back().back() = tolower(escrito.back().back());
            }
        }
    }
    
    string escritos = "";

    for(string s : escrito){
        escritos += s;
    }

    if(escritos == f){
        cout << "Correct" << endl;
    } else {
        cout << "Incorrect" << endl;
    }

}
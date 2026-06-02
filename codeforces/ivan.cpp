#include <bits/stdc++.h>
#include <cctype>
using namespace std;

#define op ios::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define endl '\n'

signed main() {
    op
    vector <string> v = {"ana", "bia"};
    string nome = "ivan";
    set <char> con;
    for(auto x : v) {
        for(auto y : x) {
            con.insert(y);
        }
    }
    cout << con.size() << endl;
}
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

    int contador = 0;
    int num1 = 1;
    int num2 = 1;
    for(int i=0; i<n-1; i++){
        if(v[i] != v[i+1]){
            contador++;
            num2 = num1;
            num1 = 1;
        } else {
            num1++;
        }
    }

    if((contador == 1) && (num1 == num2)){

        cout << "YES" << endl;
        cout << v[0] << " " << v[n-1] << endl;
    } else {
        cout << "NO" << endl;
    }
}
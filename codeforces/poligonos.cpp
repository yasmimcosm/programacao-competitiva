#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main () {
    int n;

    cin >> n;

    for (int i=0; i < n; i++){
        int num;
        cin >> num;
        cout << (num - 2) * 180 << endl;
    }


    return 0;
}
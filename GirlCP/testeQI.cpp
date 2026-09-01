#include <bits/stdc++.h>
#include <cctype>
using namespace std;

#define op ios::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define endl '\n'

signed main() {
    op

    int mat[4][4];
    char x;
    bool daBom = false;
    int count1 =0;

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
           cin >> x;
           if(x == '#'){
            mat[i][j] = 1;
            count1++;
           } else {
            mat[i][j] = 0;
           }
        }
    }
 
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
           if(((mat[i][j] + mat[i][j+1] + mat[i+1][j] + mat[i+1][j+1]) > 2) || ((mat[i][j] + mat[i][j+1] + mat[i+1][j] + mat[i+1][j+1]) == 1)){
            daBom = true;
           }
        }

    }

    if(count1 == 0){
        cout << "YES" << endl;
    } else if(daBom){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
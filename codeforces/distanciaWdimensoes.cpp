#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main () {
    int d;
    double x, y, aux = 0;

    cin >> d;  

    for(int i =0; i < d; i++){
        cin >> x;
        cin >> y;

        aux  += (y - x) * (y - x);
    }

    aux = sqrt(aux);

    cout << fixed << setprecision(15) << aux << endl;

    return 0;
}
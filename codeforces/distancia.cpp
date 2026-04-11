#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main () {
    int x1, x2, y1, y2;

    cin >> x1;
    cin >> y1; 
    cin >> x2;
    cin >> y2;

    int _x = (x2 -x1) * (x2 -x1);
    int _y = (y2 -y1) * (y2 -y1);

    double aux = _x + _y;
    aux = sqrt(aux);

    cout << fixed << setprecision(16) << aux << endl;
    //fized é pra eu colocar em decimal e o set é pra definir a quantidade de números que vai ser mostrado depois da vírgula
    
    return 0;
}

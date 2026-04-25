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

/*
#include <iostream>  
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int D; cin >> D;
    double resultado[D], A[D], B[D], soma = 0;

    for (int i =  0; i < D ; i++){
        cin >> A[i] >> B[i]; 
        resultado[i] = B[i] - A[i]; 
        resultado[i] = pow(resultado[i], 2); // Elevo o resultado ao ²
        soma += resultado[i]; 
    }   
    soma = sqrt(soma);
    cout << fixed << setprecision(15) << soma << endl;
 
    return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;

// resenha qnd A antes de B. Cada B cria uma resenha com TODOS A antes deles
int main(){
    long long q; cin >> q; //num de eventos
    deque<char> fila;
    long long quantA = 0, quantB=0, resenha = 0;


    while(q--){
        int t;
        cin >> t;

        if (t == 1){
            char x;
            cin >> x;
            fila.push_back(x);

            if(x == 'A'){
                quantA++;
            }
            if(x == 'B'){
                quantB++;
                resenha += quantA;
            }
        
        } else if (t == 2) {
            char x;
            cin >> x;
            fila.push_front(x);

            if(x == 'A'){
                quantA++;
                resenha += quantB;
            }
            if(x == 'B'){
                quantB++;
            }
        }

        else if ( t == 3) {
            if(fila.back() == 'A'){
                quantA--;
            }
            if(fila.back() == 'B'){
                quantB--;
                resenha -= quantA;
            }
            fila.pop_back();
        }

        else if ( t == 4) {
            if(fila.front() == 'A'){
                quantA--;
                resenha -= quantB;
            }
            if(fila.front() == 'B'){
                quantB--;
            }
            fila.pop_front();
        }   

        cout << resenha << endl;
    }


    return 0;
}
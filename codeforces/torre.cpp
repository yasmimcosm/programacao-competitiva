#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        string i;
        cin >> i;
        
        char col = i[0];
        char lin = i[1];

        for(char r = '1'; r <= '8'; r++){
            if(r != lin){
                cout << col << r << endl;
            }
        }

        for (char r = 'a'; r <= 'h'; r++){
            if(r != col){
                cout << r << lin << endl;
            }
        }
    }
    
    return 0;
}

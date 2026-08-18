#include <bits/stdc++.h>
#include <cctype>
using namespace std;
 
#define op ios::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define endl '\n'
 
signed main() {
    op
    int n;
    int Cgrupos, Sgrupos, grupos, restos, resultado, Comrestos;
    cin >> n;
    while(n--){
        int n, a, b;
        cin >> n >> a >> b;
        if(n <= 3){
            Cgrupos = 1 * b;
            Sgrupos = n * a;
        } else if (b < a){
            if(n%3 == 0){
                Cgrupos = (n/3);
                Cgrupos = Cgrupos * b;
                Sgrupos = n * a;
            } else {
                Cgrupos = (n/3) + 1;
                Cgrupos = Cgrupos * b;
                Sgrupos = n * a;
            }
        } else {
            grupos = n/3;
            restos = n%3;
            Cgrupos = (grupos * b) + (restos * a);
            Sgrupos = n * a;
        }
        resultado = min(Cgrupos, Sgrupos);
        cout << resultado << endl;
    }
}
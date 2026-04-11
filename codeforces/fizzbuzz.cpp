#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main () {

    int n;

    cin >> n;

    if ((n % 3) == 0 && ((n % 5) == 0)) {
        cout << "FizzBuzz" << endl;
    } 
    else if ((n % 5) == 0) {
        cout << "Buzz" << endl;
    } 
    else if ((n % 3) == 0) {
        cout << "Fizz" << endl;
    }

    return 0;
}

/* Como eu poderia ter feito:

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n % 3 == 0) cout << "Fizz";
    if (n % 5 == 0) cout << "Buzz";

    return 0;
}

*/
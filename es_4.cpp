// 4. Inserire 10 numeri,
// contare quanti numeri pari e dispari sono stati inseriti.

#include <iostream>
using namespace std;

int main() {
    int n, conta_pari = 0, conta_dispari = 0;

    for (int i = 1; i <= 10; i++) {
        cout << "Inserisci un numero: ";
        cin >> n;

        if (n % 2 == 0) {
            conta_pari++;
        } else {
            conta_dispari++;
        }
    }

    cout << "Numeri pari: " << conta_pari << endl
        << "Numeri dispari: " << conta_dispari << endl;

    return 0;
}
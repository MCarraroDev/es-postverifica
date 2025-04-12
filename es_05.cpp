// 5. Inserisci 10 numeri,
// contare quanti numeri compresi tra 10 e 20 sono stati inseriti,
// contare anche i multipli di 3.

#include <iostream>
using namespace std;

int main() {
    int n, conta_10_20 = 0, conta_multipli_3 = 0;

    for (int i = 1; i <= 10; i++) {
        cout << "Inserisci un numero: ";
        cin >> n;

        if (n >= 10 && n <= 20) {
            conta_10_20++;
        }

        if (n % 3 == 0) {
            conta_multipli_3++;
        }
    }

    cout << "Numeri compresi tra 10 e 20: " << conta_10_20 << endl
         << "Multipli di 3: " << conta_multipli_3 << endl;

    return 0;
}
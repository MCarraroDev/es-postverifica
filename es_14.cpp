// 14. Inserire numeri in input numeri finché la loro somma è minore di 100,
// trovare il massimo ed il minimo,
// contare quanti numeri pari sono stati inseriti.

#include <iostream>
using namespace std;

int main() {
    int n, somma = 0, conta_pari = 0, maggiore, minore;

    cout << "Inserisci un numero: ";
    cin >> n;

    somma += n;
    maggiore = minore = n;

    if (n % 2 == 0) {
        conta_pari++;
    }

    while (somma < 100) {
        cout << "Inserisci un numero: ";
        cin >> n;

        somma += n;

        if (n % 2 == 0) {
            conta_pari++;
        }

        if (n > maggiore) {
            maggiore = n;
        }
        if (n < minore) {
            minore = n;
        }
    }

    cout << "Somma: " << somma << endl
         << "Maggiore: " << maggiore << endl
         << "Minore: " << minore << endl
         << "Numeri pari: " << conta_pari << endl;

    return 0;
}
// 15. Inserire da tastiera 10 numeri compresi tra 2 e 10 (con controllo finchè
//     non è compreso),
//     fare la media dei 10 numeri inseriti.

#include <iostream>
using namespace std;

int main() {
    int n, somma = 0;
    float media;

    for (int i = 1; i <= 10; i++) {
        do {
            cout << "Inserisci un numero compreso tra 2 e 10: ";
            cin >> n;
        } while (n < 2 || n > 10);

        somma += n;
    }

    media = float(somma) / 10;

    cout << "La somma è: " << somma << endl
         << "La media è: " << media << endl;

    return 0;
}
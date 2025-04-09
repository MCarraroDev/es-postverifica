// 12. Chiedere in input un numero n positivo,
// inserire n numeri in input e calcolarne la media.

#include <iostream>
using namespace std;

int main() {
    int n_iter, somma = 0;
    float media;

    do {
        cout << "Inserisci un numero positivo: ";
        cin >> n_iter;
    } while (n_iter < 0);

    for (int i = 1; i <= n_iter; i++) {
        int numero;
        cout << "Inserisci un numero: ";
        cin >> numero;

        somma += numero;
    }

    media = float(somma) / n_iter;

    cout << "La somma è: " << somma << endl
         << "La media è: " << media << endl;

    return 0;
}
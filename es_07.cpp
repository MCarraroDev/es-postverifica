// 7. Inserire da tastiera finché non inserisco -1,
// calcolare la media dei numeri inseriti e
// la percentuale dei numeri pari.

#include <iostream>
using namespace std;

int main() {
    int n, somma = 0, conta_pari = 0, conta_numeri = 0;
    float media, percentuale_pari;

    do {
        cout << "Inserisci un numero: ";
        cin >> n;

        if (n != -1) {
            somma += n;
            conta_numeri++;

            if (n % 2 == 0) {
                conta_pari++;
            }
        }
    } while (n != -1);

    if (conta_numeri > 0) {
        media = float(somma) / conta_numeri;
        percentuale_pari = (float(conta_pari) / conta_numeri) * 100;

        cout << "La somma è: " << somma << endl
             << "La media è: " << media << endl
             << "Percentuale di numeri pari: " << percentuale_pari << "%" << endl;
    } else {
        cout << "Nessun numero inserito." << endl;
    }

    return 0;
}
// 6. Inserisci 10 numeri,
// calcolare il modulo (matematico) di ogni numero,
// fare la media dei numeri inseriti.

#include <iostream>
using namespace std;

int main() {
    int n, i, somma = 0;
    float media;

    for (i = 1; i <= 10; i++) {
        cout << "Inserisci un numero: ";
        cin >> n;

        if (n < 0) {
            n *= -1;
        }

        somma += n;
    }

    media = float(somma) / i;   // media = static_cast<float>(somma) / i;


    cout << "La somma è: " << somma << endl
         << "La media è: " << media << endl;

    return 0;
}
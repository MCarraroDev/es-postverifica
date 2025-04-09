// Generare 5 numeri randomici [30, 100], trovare il maggiore e il minore

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // Inizializza il generatore di numeri casuali
    int numero, maggiore, minore;

    // Genera il primo numero casuale e inizializza maggiore e minore
    numero = rand() % 71 + 30; 
    cout << "Numero 1: " << numero << endl;
    maggiore = minore = numero;

    // Genera i restanti 4 numeri casuali e aggiorna maggiore e minore
    for (int i = 2; i <= 5; i++) {
        numero = rand() % 71 + 30;
        cout << "Numero " << i << ": " << numero << endl;

        if (numero > maggiore) {
            maggiore = numero;
        }
        if (numero < minore) {
            minore = numero;
        }
    }

    cout << "Maggiore: " << maggiore << endl;
    cout << "Minore: " << minore << endl;

    return 0;
}
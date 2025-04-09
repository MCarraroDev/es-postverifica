// 10. Inserire 10 numeri,
// compresi tra 10 e 20 (con controllo finchè non è compreso),
// calcolare il prodotto dei numeri inseriti.

#include <iostream>
using namespace std;

int main() {
    int n, prodotto = 1;

    for (int i = 1; i <= 10; i++) {
        do {
            cout << "Inserisci un numero compreso tra 10 e 20: ";
            cin >> n;
        } while (n < 10 || n > 20);

        prodotto *= n;
    }

    cout << "Il prodotto è: " << prodotto << endl;

    return 0;
}
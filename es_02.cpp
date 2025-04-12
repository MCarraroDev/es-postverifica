// 2. Dati in input due lati di un quadrilatero,
// stampare in output se è un quadrato o un rettangolo,
// calcolare l’area e il perimetro.

#include <iostream>
using namespace std;

int main() {
    int l1, l2;
    
    cout << "Inserisci l1: ";
    cin >> l1;

    cout << "Inserisci l2: ";
    cin >> l2;

    if (l1 == l2) {
        cout << "Il quadrilatero è un quadrato." << endl;
    } else {
        cout << "Il quadrilatero è un rettangolo." << endl;
    }

    cout << "L'area è: " << l1 * l2 << endl
        << "Il perimetro è: " << 2 * (l1 + l2) << endl;


    return 0;
}
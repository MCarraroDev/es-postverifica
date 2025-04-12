// 8. Chiedere all’utente un numero N, calcolare la somma dei numeri precedenti.
// (Es. N=5, 1+2+3+4+5), mostra a video il risultato.

#include <iostream>
using namespace std;

int main() {
    int n, somma = 0;

    cout << "Inserisci un numero: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        somma += i;
    }

    cout << "La somma è: " << somma << endl;

    return 0;
}
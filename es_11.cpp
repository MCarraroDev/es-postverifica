// 11. Chiedere in input un numero n positivo (con controllo),
// stampare a video tutti i numeri da 0 a n.

#include <iostream>
using namespace std;

int main() {
    int n;

    do {
        cout << "Inserisci un numero positivo: ";
        cin >> n;
    } while (n < 0);

    for (int i = 0; i <= n; i++) {
        cout << i << endl;
    }

    return 0;
}
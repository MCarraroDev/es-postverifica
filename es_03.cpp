// 3. Dati due numeri in input A e B,
// maggiori di 10 (con controllo),
// se A è maggiore di B scambiare le due variabili,
// sennò stampare la somma dei due.

#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    do {
        cout << "Inserisci A (deve essere maggiore di 10): ";
        cin >> a;
    } while (a <= 10);

    do {
        cout << "Inserisci B (deve essere maggiore di 10): ";
        cin >> b;
    } while (b <= 10);

    if (a > b) {
        temp = a;
        a = b;
        b = temp;

        cout << "a: " << a << ", b: " << b << endl;
        
    } else {
        cout << "La somma è: " << a + b << endl;
    }

    return 0;
}
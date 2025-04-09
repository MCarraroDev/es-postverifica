// 9. Inserire da tastiera un numero N, calcolare la sua tabellina dall’1 al 10.

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Inserisci un numero: ";
    cin >> n;

    for (int i = 1; i <= 10; i++) {
        cout << n * i << endl;
    }

    return 0;
}
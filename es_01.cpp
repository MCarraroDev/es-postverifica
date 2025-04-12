// 1. Inserisci un numero N in input, calcolare il modulo di N.
// (Modulo operazione matematica)
// es: -7 --> 7, 8 --> 8, 0 --> 0

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Inserisci n: ";
    cin >> n;

    if (n < 0) {
        n *= -1;
        /*
        è come scrivere:
            n = n * -1
        */
    }

    cout << "Il modulo è: " << n << endl;

    return 0;
}
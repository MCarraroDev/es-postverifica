// 16. Inserisci da tastiera un voto (con controllo che sia compreso tra 4 e
//     10). Alla fine, visualizza una lettera corrispondente al numero inserito come
//     segue: 10=”S” 9=”A“ 8=”B” 7=”C” 6=”D“ 5=”E” 4=”F”.

#include <iostream>
using namespace std;

int main() {
    int voto;

    do {
        cout << "Inserisci un voto compreso tra 4 e 10: ";
        cin >> voto;
    } while (voto < 4 || voto > 10);

    cout << "La lettera corrispondente al voto " << voto << " è: ";
    switch (voto) {
        case 10:
            cout << 'S';
            break;
        case 9:
            cout << 'A';
            break;
        case 8:
            cout << 'B';
            break;
        case 7:
            cout << 'C';
            break;
        case 6:
            cout << 'D';
            break;
        case 5:
            cout << 'E';
            break;
        case 4:
            cout << 'F';
            break;
        default:
            cout << "Errore";
            break;
    }
    cout << endl;

    return 0;
}

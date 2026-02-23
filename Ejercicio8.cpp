#include <iostream>
using namespace std;

int main() {
    char letra;

    cout << "Ingrese una letra: ";
    cin >> letra;

    cout << "Letra ingresada: " << letra << endl;
    cout << "Letra 3 veces: " << letra << letra << letra << endl;
    cout << "Valor numerico: " << int(letra);

    return 0;
}

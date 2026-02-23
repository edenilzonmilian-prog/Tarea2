#include <iostream>
using namespace std;

int main() {
    string nombre;
    int edad;
    float altura;
    double precio;
    char inicial;

    cout << "Ingrese su nombre: ";
    cin >> nombre;

    cout << "Ingrese su edad: ";
    cin >> edad;

    cout << "Ingrese su altura: ";
    cin >> altura;

    cout << "Ingrese el precio de un producto: ";
    cin >> precio;

    cout << "Ingrese la inicial de su apellido: ";
    cin >> inicial;
    
    
    system("cls");

    cout << "RESUMEN" << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "Altura: " << altura << endl;
    cout << "Precio producto: " << precio << endl;
    cout << "Inicial apellido: " << inicial;

    return 0;
}

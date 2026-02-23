#include <iostream>
using namespace std;

int main() {
	
	float bas, alt, A;
	
	cout<<"Ingrese la base del triángulo: ";
		cin>>bas;
	cout<<"Ingrese la altura del triángulo: ";
		cin>>alt;
		
	A = (bas*alt)/2;
	
	cout<<"El área del triángulo es: "<<A;
	return 0;
	}

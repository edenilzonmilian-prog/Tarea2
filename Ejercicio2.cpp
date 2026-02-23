#include <iostream>
using namespace std;

int main () {
	
	int num1, num2, s, r, m;
	cout<<"Ingrese el primer número: ";
	cin>>num1;
	cout<<"Ingrese el segundo número: ";
	cin>>num2;
	
	s = num1 + num2;
	r = num1 - num2;
	m = num1 * num2;
	
	system("cls");
	
	cout<<"El resultado de la suma es: "<< s <<endl;
	cout<<"El resultado de la resta es: "<< r <<endl;
	cout<<"El resultado de la multiplicación es: "<< m <<endl;
	
	
	return 0;
}

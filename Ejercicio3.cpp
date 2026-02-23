#include <iostream>
using namespace std;

int main () {
	
	float est, pes, imc;
	cout<<"Ingrese la estatura: ";
	cin>>est;
	cout<<"Ingrese el peso: ";
	cin>>pes;
	
	imc = pes/(est*est);
	
	cout<<"El IMC es: "<<imc;
	
	return 0;
}

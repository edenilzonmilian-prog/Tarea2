#include <iostream>
using namespace std;


int main () {
	
	double montoinicial, porcentaje;
	
	cout<<"Digite el monto inicial: " ;
	cin>>montoinicial;
	cout<<"Digite el porcentaje proporcionado por el cliente: " ;
	cin>>porcentaje;
	
	system ("cls");
	
	cout<<"nuevo monto: " << montoinicial + (montoinicial * porcentaje / 100) << endl; 
	
return 0;
	
	
}

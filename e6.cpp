#include <iostream>
using namespace std;

int main () {
	double promedio, pension;
	do{
		cout << "Ingrese su promedio: ";
		cin >> promedio;
		if(promedio<0){
			cout<<"El promedio ingresado es invalido. Intente nuevamente."<<endl;
		}
	}while(promedio<0);
	do{
		cout << "Ingrese el monto de su pension: ";
		cin >> pension;
		if(pension<0){
			cout<<"Monto ingresado es invalido. Intente nuevamente."<<endl;
		}
	}while(pension<0);
	if (promedio >= 18) {
		pension = pension * 0.7;
		cout << "Recibio un 30% de descuento, ahora pagara " << pension;
	} else {
		pension= pension*1.18;
		cout << "No recibio ningun descuento, pagara " << pension<<" (incluido el IGV)";
	}
	return 0;
}
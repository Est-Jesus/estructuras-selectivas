#include <iostream>
#include <windows.h>
using namespace std;

int main () {
	SetConsoleOutputCP(CP_UTF8);
	double n_camisas, monto_pago, descuento;
	char respuesta;
	do{
	cout <<"Ingrese la cantidad de camisas: ";
	cin >> n_camisas;
	cout <<"Ingrese el costo de su compra: ";
	cin >> monto_pago;
	if(n_camisas<=0 or monto_pago<=0){
		cout<<endl<<"Intente nuevamente ingresando cantidades mayores que cero."<<endl;
	}
	}while(n_camisas<=0 or monto_pago<=0);
	if (n_camisas >= 3) {
		descuento = monto_pago * 0.8;
		cout <<"Recibio un 20% de descuento, ahora pagara " << descuento<<" por las "<<n_camisas<<" camisas."<<endl;
	} else {
		descuento = monto_pago *0.9;
		cout << "Recibio un 10 % de decuento, ahora pagara " << descuento<<" por las "<<n_camisas<<" camisas."<<endl;
	}
	do{
		cout<<"¿Desea añadir más camisas? (s/n)"<<endl;
	cin>>respuesta;
	if(respuesta=='s'){
		double camisas_extras;
		cout<<"Ingrese la cantidad de camisas a añadir: ";
		cin>>camisas_extras;
		n_camisas+=camisas_extras;
		double precio_extra;
		cout<<"Ingrese el costo de camisas añadidas: ";
		cin>> precio_extra;
		monto_pago+=precio_extra;
		if (n_camisas >= 3) {
		descuento = monto_pago * 0.8;
		cout <<"Recibio un 20% de descuento, ahora pagara " << descuento<<" por las "<<n_camisas<<" camisas."<<endl;
	} else {
		descuento = monto_pago *0.9;
		cout << "Recibio un 10 % de decuento, ahora pagara " << descuento<<" por las "<<n_camisas<<" camisas."<<endl;
	}
	}
	}while(respuesta=='s');
}
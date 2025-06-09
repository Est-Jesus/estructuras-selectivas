#include <iostream>
using namespace std;

int main() {
	double compra;
	do{
		cout<<"**SI SU COMPRA SUPERA LOS 1000 SOLES, RECIBE UN DESCUENTO**"<<endl;
		cout<<"Ingrese el monto de su compra: ";
		cin>>compra;
		if(compra<0){
			cout<<"Dene ingresar un monto positivo. Intente nuevamente."<<endl<<endl;
		}
	}while(compra<0);
	if(compra>1000){
		compra=compra*0.8;
		cout<<"Usted recibio un descuento del 20% ahora solo pagara "<<compra<<" soles.";
	}else{
		cout<<"Usted no recibio ningun descuento, su pago seguira siendo "<<compra<<" soles.";
	}
	return 0;
}
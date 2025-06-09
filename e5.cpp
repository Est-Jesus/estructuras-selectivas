#include <iostream>
using namespace std;

int main () {
	double pulsaciones, edad; 
	char genero;
	do{
		cout << "Ingrese su edad: ";
		cin >> edad;
		if(edad<=0){
			cout<<"Intente nuevamente digitando una edad mayor a cero."<<endl;
		}
	}while(edad<=0);
	do{
		cout << "Ingrese su genero (m/f): ";
		cin >> genero;
		switch(genero) {
		case 'm':
			pulsaciones = (210 - edad) / 10;
			cout << "El numero de pulssaciones es " << pulsaciones;
			break;
		case 'f':
			pulsaciones = (220 - edad) / 10;
			cout << "El numero de pulsaciones es " << pulsaciones;
			break;
		default:
			cout << "Error: Escriba en genero masculino (m) o femenino (f)."<<endl;
			break;
		}
	}while(genero!='m' and genero!='f');
	return 0;
}
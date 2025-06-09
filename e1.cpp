#include <iostream>
#include <windows.h>
using namespace std;


int main() {
	SetConsoleOutputCP(CP_UTF8);
	double nota1, nota2, nota3, promedio;
	do{
	cout <<"Ingrese la primera calificación: ";
	cin >> nota1;
	if(nota1<0){
		cout<<"Numero invalido. Intente nuevamente."<<endl;
	}
	}while(nota1<0);
	do{
	cout << "Ingrese la segunda calificación: ";
	cin >> nota2;
	if(nota2<0){
		cout<<"Numero invalido. Intente nuevamente."<<endl;
	}
	}while(nota2<0);
	do{
	cout << "Ingrese la tercera calificación: ";
	cin >> nota3;
	if(nota3<0){
		cout<<"Numero invalido. Intente nuevamente."<<endl;
	}
	}while(nota3<0);
	promedio = (nota1+nota2+nota3)/3;
	if (promedio >= 70) {
		cout <<"Su promedio es " << promedio << ", está " << "aprobado";
	} else {
		cout <<"Su promedio es " << promedio << ", está " << "reprobado";
	}
	return 0;
}
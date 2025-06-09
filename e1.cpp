#include <iostream>
#include <windows.h>
using namespace std;


int main() {
	SetConsoleOutputCP(CP_UTF8);
	double nota1, nota2, nota3, promedio;
	do{
	cout <<"Ingrese la primera calificación: ";
	cin >> nota1;
	cout << "Ingrese la segunda calificación: ";
	cin >> nota2;
	cout << "Ingrese la tercera calificación: ";
	cin >> nota3;
	cout<<endl;
	if(nota1<0 or nota2<=0 or nota3<0){
		cout<<"INGRESE NUEVAMENTE LAS CALIFICACIONES (NO NEGATIVAS)."<<endl;
	}
	}while(nota1<0 or nota2<=0 or nota3<0);
	promedio = (nota1+nota2+nota3)/3;
	if (promedio >= 70) {
		cout <<"Su promedio es " << promedio << " , está " << "aprobado";
	} else {
		cout <<"Su promedio es " << promedio << " , está " << "reprobado";
	}
	return 0;
}
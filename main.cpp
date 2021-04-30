#include <iostream>
#include <math.h>

using std::endl;
using std::cout;
using std::cin;

int menu(){
	
	int op;
	cout<<"         MENU          "<<endl<<endl;
	cout<<"1. Triangulo de Pascal "<<endl;
	cout<<"2. Calcular el promedio y la desviacion estandar poblacional"<<endl;
	cout<<"3. Imprimir un codigo de barra"<<endl<<endl;
	cout<<"Porvafor Ingrese una opcion: "<<endl;
	cin>>op;
	
	return op;
}

int main(int argc, char** argv) {
	int op=menu();
	return 0;
}

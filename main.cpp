#include <iostream>
#include <math.h>

using std::endl;
using std::cout;
using std::cin;

int menu(){
	
	int op;
	cout<<"         MENU          "<<endl<<endl;
	cout<<"1. Triangulo de Pascal "<<endl;
	cout<<"2. Calcular la desviacion estandar poblacional"<<endl;
	cout<<"3. Imprimir un codigo de barra"<<endl;
	cout<<"4. Salir"<<endl<<endl;
	cout<<"Porvafor Ingrese una opcion: "<<endl;
	cin>>op;
	
	return op;
}
void TP(int n, int max_n, int res_anterior [], int salida []){
	
	 
	
}
double promedio(int arreglo []){
	double acum = 0, cant=20, p;
    	for (int i = 0; i < cant; i++){
        	acum = acum + arreglo[i];
    	}
    	p= acum/cant;
    
    	return p;  
}
double desviacion (int arreglo []){	
    
	double promedio2=promedio(arreglo);
	double acum=0;
	double des;
	
		for(int i = 0;i<20;i++){
			acum=acum+pow((double)arreglo[i]+promedio2,2);
		}
		
		des=sqrt(acum/20);
		return des;
}

int main(int argc, char** argv) {
	
	int op=menu();
	switch (op){
		case 1:{
			 
		}
			break;
	    case 2:{
	     int size=20;
		 int arreglo [size];
		 
		}
		    break;
		
			
	}
	
	return 0;
}

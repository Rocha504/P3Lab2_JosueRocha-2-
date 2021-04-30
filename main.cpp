#include <iostream>
#include <math.h>
#include <stdlib.h>     
#include <time.h>  

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
void CB(int arreglo [], int arreglo2 []){
	char white=177,black=178;
	for(int i=0;i<10;i++){
		cout<<i+1;
		int val1=arreglo[i];
		int val2=arreglo2[i];
		
		for(int x=0;x<val1;x++){
			cout<<black<<" ";
		}
		cout<<endl;
		cout<<" ";
		for(int y=0;y<val2;y++){
			cout<<white<<" ";
		}
		cout<<endl;
	}
	
}
int main(int argc, char** argv) {
	
	int op=menu();
	srand (time(NULL));
	
	switch (op){
		case 1:{
			 
		}
			break;
	    case 2:{
	     double des;
	     int size=20;
		 int arreglo [size];
		 for(int i=0;i<size;i++){
		 	arreglo[i]=rand() % 100 + 1;
		 }
		 for(int x=0;x<size;x++){
		 	cout<<"["<<arreglo[x]<<"]";
		 }
		 cout<<endl;
		 des=desviacion(arreglo);
		 cout<<"La desviacion poblacional es de: "<<des;
		}
		    break;
		case 3:{
			int size=10;
			int arreglo [size];
			int arreglo2[size];
			for(int i=0;i<size;i++){
		 	arreglo[i]=rand() % 20 + 1;
		 }
		 for(int i=0;i<size;i++){
		 	arreglo2[i]=rand() % 20 + 1;
		 }
		 for(int x=0;x<size;x++){
		 	cout<<"["<<arreglo[x]<<"]";
		 }
		 cout<<endl;
		 for(int g=0;g<size;g++){
		 	cout<<"["<<arreglo2[g]<<"]";
		 }
		 cout<<endl;
		 CB(arreglo,arreglo2);
		 
		}
			break;
		
			
	}
	
	return 0;
}

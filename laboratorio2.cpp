#include <iostream>
#include <cmath>
using std::cout;
using std::endl;
using std::cin;
int factorial(int x);
int elevado(double x,int y);

int main(int argc, char*argv[]){
	int opcion;
	cout<<"Laboratorio 2"<<endl;
	cout<<"1. Calculo de Euler"<<endl;
	cout<<"2. Trapezoide"<<endl;
	cout<<"Cual programa desea utilizar: ";
	cin>>opcion;
	if(opcion==1){
		double variable ,acumulador=1.0;
      		cout<<"Calculo de Euler"<<endl;
       		cout<<"Euler elevando a desea calcular: ";
       		cin>>variable;
		for(int i=1;i<=15;i++){
			acumulador+= (pow(variable,i)/factorial(i));
		}
		cout<<"El calculo de Euler de "<<variable<<" es: "<<acumulador<<endl;
	}else if(opcion==2){
		double x1,x2,x3,x4,y1,y2,y3,y4;
		cout<<"Trapezoide"<<endl;
		cout<<"Punto1:"<<endl;
		cout<<"x: ";
		cin>>x1;
		cout<<"y: ";
		cin>>y1;
		cout<<"Punto2:"<<endl;
                cout<<"x: ";
                cin>>x2;
                cout<<"y: ";
                cin>>y2;
		cout<<"Punto3:"<<endl;
                cout<<"x: ";
                cin>>x3;
                cout<<"y: ";
                cin>>y3;
		cout<<"Punto4:"<<endl;
                cout<<"x: ";
                cin>>x4;
                cout<<"y: ";
                cin>>y4;
		while(){
		}
	}else{
		cout<<"Opcion no valida";
	}		
}	

int factorial(int x){
	int acumulador=1;
	for(int i=1;i<=x;i++){
		acumulador*=i;
	}
	return acumulador;
}



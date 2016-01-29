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
		int validadorx=0,validadory=0;
		if((x1==x2)||(x1==x3)||(x1==x4)){
			cout<<"prueba";
			validadorx+=1;
		}	
		if((x2==x1)||(x2==x3)||(x2==x4)){
                        validadorx+=1;
                }	
		if((x3==x1)||(x3==x2)||(x3==x4)){
                        validadorx+=1;
                }
		if((x4==x1)||(x4==x2)||(x4==x3)){
                        validadorx+=1;
                }
		if((y1==y2)||(y1==y3)||(y1==y4)){
                        validadory+=1;
                }
		if((y2==y1)||(y2==y3)||(y2==y4)){
                        validadory+=1;
                }
		if((y3==y1)||(y3==y2)||(y3==y4)){
                        validadory+=1;
                }
		if((y4==y1)||(y4==y2)||(y4==y3)){
                        validadory+=1;
                }
		if((validadorx<=2)&&(validadory<=2)){
			cout<<"hola";
			int validador=0;
			if(((x1==x2)&&(y1==y2))||((x1==x3)&&(y1==y3))||((x1==x4)&&(y1==y4))){
				validador=1;
			}
			if(((x2==x1)&&(y2==y1))||((x2==x3)&&(y2==y3))||((x2==x4)&&(y2==y4))){
                                validador=1;
                        }
			if(((x3==x1)&&(y3==y1))||((x3==x2)&&(y3==y2))||((x3==x4)&&(y3==y4))){
                                validador=1;
                        }
			if(((x4==x1)&&(y4==y1))||((x4==x2)&&(y4==y2))||((x4==x3)&&(y4==y3))){
                                validador=1;
                        }
			if(validador==0){
				cout<<"hola2";
			//aqui comienza
			}else{
				cout<<"Ingreso puntos repetidos";
			}

		}else{
			cout<<"Los puntos que ingreso no forman un trapezoide";
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



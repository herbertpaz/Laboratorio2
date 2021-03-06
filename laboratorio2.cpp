#include <iostream>
#include <cmath>
using std::cout;
using std::endl;
using std::cin;
int factorial(int x);
int elevado(double x,int y);
double recta(double x1,double x2,double y1,double y2);
double alturaa(double a,double b,double c);
double alturab(double a,double b,double c);
double alturac(double a,double b,double c);
double semi(double a,double b,double c);
double area(double base,double h1,double h2);

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
			validadorx+=1;	
			cout<<"1";
		}	
		if((x2==x3)||(x2==x4)){
                        validadorx+=1;
			cout<<"2";
                }	
		if(x3==x4){
                        validadorx+=1;
			cout<<"3";
                }
		if((y1==y2)||(y1==y3)||(y1==y4)){
                        validadory+=1;
                }
		if((y2==y3)||(y2==y4)){
                        validadory+=1;
                }
		if(y3==y4){
                        validadory+=1;
               	}
		if((validadorx<=2)&&(validadory<=2)){
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
			//aqui comienza
				cout<<"Los puntos son:"<<endl;
				cout<<"( "<<x1<<", "<<y1<<")"<<endl;
				cout<<"( "<<x2<<", "<<y2<<")"<<endl;
				cout<<"( "<<x3<<", "<<y3<<")"<<endl;
				cout<<"( "<<x4<<", "<<y4<<")"<<endl;
				cout<<endl;
				cout<<"Los lados del trapezoide son:"<<endl;
				cout<<"Lado 1: "<<recta(x1,x2,y1,y2)<<endl;
				cout<<"Lado 2: "<<recta(x3,x1,y3,y1)<<endl;
				cout<<"Lado 3: "<<recta(x3,x4,y3,y4)<<endl;
				cout<<"Lado 4: "<<recta(x2,x4,y2,y4)<<endl;
				cout<<endl;
				cout<<"Los lados del triangulo 1 miden: "<<endl;
				cout<<"Lado 1: "<<recta(x3,x1,y3,y1)<<endl;
				double a1=recta(x3,x1,y3,y1);
				cout<<"Lado 2: "<<recta(x3,x4,y3,y4)<<endl;
				double b1=recta(x3,x4,y3,y4);
				cout<<"Lado 3: "<<recta(x1,x4,y1,y4)<<endl;
				double c1=recta(x1,x4,y1,y4);
				cout<<"Los lados del triangulo 2 miden: "<<endl;
                                cout<<"Lado 1: "<<recta(x1,x2,y1,y2)<<endl;
				double a2=recta(x1,x2,y1,y2);
                                cout<<"Lado 2: "<<recta(x2,x4,y2,y4)<<endl;
				double b2=recta(x2,x4,y2,y4);
                                cout<<"Lado 3: "<<recta(x1,x4,y1,y4)<<endl;
				double c2=recta(x1,x4,y1,y4);
				cout<<endl;	
				double semi1= semi(a1,b1,c1);
				double semi2= semi(a2,b2,c2);
				cout<<"Semiperimetro del triangulo 1: "<<semi1<<endl;
				cout<<"Semiperimetro del triangulo 2: "<<semi2<<endl;
				cout<<"Perimetro del triangulo 1: "<< a1+b1+c1<<endl;
				cout<<"Perimetro del triangulo 2: "<< a2+b2+c2<<endl;
				cout<<endl;
				cout<<"Las alturas del triangulo 1 es: "<<endl;
				cout<<"Altura 1: "<<alturaa(a1,b1,c1)<<endl;
				cout<<"Altura 2: "<<alturab(a1,b1,c1)<<endl;
				cout<<"Altura 3: "<<alturac(a1,b1,c1)<<endl;
				double h1=alturac(a1,b1,c1);
				cout<<endl;
				cout<<"Las alturas del triangulo 2 es: "<<endl;          
                                cout<<"Altura 1: "<<alturaa(a2,b2,c2)<<endl;
                                cout<<"Altura 2: "<<alturab(a2,b2,c2)<<endl;
                                cout<<"Altura 3: "<<alturac(a2,b2,c2)<<endl;
				double h2=alturac(a2,b2,c2);
                                cout<<endl;				
				cout<<"El area del trapezoide: "<<area(c1,h1,h2)<<endl;
			}else{
				cout<<"Ingreso puntos repetidos"<<endl;
			}

		}else{
			cout<<"Los puntos que ingreso no forman un trapezoide"<<endl;
		}

	}else{
		cout<<"Opcion no valida"<<endl;
	}		
}	

int factorial(int x){
	int acumulador=1;
	for(int i=1;i<=x;i++){
		acumulador*=i;
	}
	return acumulador;
}

double recta(double x1,double x2,double y1,double y2){
	double valor;
	valor= pow((x2-x1),2)+pow((y2-y1),2);
	valor= sqrt(valor);
	return valor;	
}

double semi(double a,double b,double c){
	double valor;
	valor= (a+b+c)/2.0;
	return valor;
}

double alturaa(double a,double b,double c){
	double valor;
	double s=semi(a,b,c);
	valor= ((2.0)/a)*(sqrt((s*(s-a)*(s-b)*(s-c))));
	return valor;
}

double alturab(double a,double b,double c){
        double valor;
        double s=semi(a,b,c);
        valor= ((2.0)/b)*(sqrt((s*(s-a)*(s-b)*(s-c))));
        return valor;
}

double alturac(double a,double b,double c){
        double valor;
        double s=semi(a,b,c);
        valor= ((2.0)/c)*(sqrt((s*(s-a)*(s-b)*(s-c))));
        return valor;
}

double area(double base,double h1,double h2){
	double valor;
	valor=((base*h1)/2.0)+((base*h2)/2.0);
	return valor;
}


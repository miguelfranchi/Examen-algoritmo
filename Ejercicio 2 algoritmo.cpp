#include <iostream>
#include <math.h>

using namespace std;

//VARIABLES 
float a, b, c, x1 = 0, x2 = 0;
int main(){
	cout<<"Calculadora de Ecuacion 2do Grado";
	cout<<"\n\n\nDigite el valor de a: "; cin>>a;
	cout<<"\nDigite el valor de b: "; cin>>b;
	cout<<"\nDigite el valor de c: "; cin>>c;
	
	    x1 = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
	    x2 = (-b-sqrt(pow(b,2)-4*a*c))/(2*a);
	    
	    cout<<"\n\n\nEl resultado de x1 es: "<<x1;
	    cout<<"\nEl resultado de x2 es: "<<x2;
	    
	    if(x1 <= 0 || x2 <=0){
			cout<<"\n\nAlguna de las raices es negativa. El programa no calcula raices no reales";
		} 
	    return 0;
}

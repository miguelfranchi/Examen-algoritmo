#include<iostream>

using namespace std;

int main () {
    int numero1= 0;
    int numero2= 0;
    
    cout <<"Introduce 2 numeros: ";
    cin >> numero1;
    cin >> numero2;
    
    if(numero1 == numero2) {
        cout << "Los 2 numeros son iguales";
    }
    else if(numero1 > numero2) {
    	cout << "El mayor es " << numero1;
	}
	else{
		cout << "El mayor es " << numero2;
	}
	
	return 0;
}
    

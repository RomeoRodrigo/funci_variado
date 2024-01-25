#include <iostream>
using namespace std;
//el usuario ingresara los numeros
void ingresar(int &n1, int &n2){
	cout<<"ingrese un numero: ";
	cin>>n1;
	cout<<"ingrese otro numero: ";
	cin>>n2;
}
	//suma de los numeros ingresados
void sumar(int n1, int n2, int &resultado){
	resultado=n1+n2;
}
	
int main(int argc, char *argv[]) {
	int n1, n2, resultado;
	ingresar(n1,n2);
	sumar(n1,n2,resultado);
	cout<<"la suma es:  "<<resultado<<endl;
	
	
	return 0;
}


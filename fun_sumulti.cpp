#include <iostream>
using namespace std;
//Declaracion de variables globales.
int n1, n2;

int sumar()
{
	return n1+n2;	
}

int multiplicar()
{
	return n1*n2;
}
/*Realizar una funcion booleano para recibir un parametro y determinar
si es par true o impar false*/
bool par(int numero){
	if (numero %2 ==0){
		return true;
	} else{
		return false;
	}
}
	
	
		
		
void ingresar()
{
	cout<<"Ingresar el primer numero: ";
	cin>>n1;
	cout<<"Ingresar el segundo numero: ";
	cin>>n2;
}
int main(int argc, char *argv[]) 
{

	ingresar();
	cout<<"Suma de los numeros es: "<<sumar()<<endl;
	cout<<"multiplicacion de los numeros es: "<<multiplicar()<<endl;
	int numero;
	cout<<"Ingrese un numero: ";
	cin>>numero;
	
	if (par(numero)){
		cout<<"El numero es par."<<endl;
		
	} else{
		cout<<"El numero es impar."<<endl;
	}
	return 0;
}


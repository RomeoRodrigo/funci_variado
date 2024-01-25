#include <iostream>

using namespace std;
int aleatorio()//funcion para numero aleatorio
{
	return rand() % 100;
}
//funcion para numeros impares
bool esImpar(int numero){
	return numero %2!=0;
}
int main(int argc, char *argv[]) {
	int n,c=0,num;//declaracion de variables
	cout<<"generar n numero impares, ingrese n: ";
	cin>>n;//cantidad n de numeros a imprimir
	//bucle para numeros aleatorios
	while(c<n){
		num=aleatorio();
		if(esImpar(num)){
			c++;
			cout<<"impar["<<c<<"]:"<<num<<endl;
		}
	}
	
	return 0;
}


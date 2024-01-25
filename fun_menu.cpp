#include<iostream>

using namespace std;

// Declaraci�n de funciones
void mostrarMenu();
void ingresarNumeros(int &num1, int &num2);
int sumarNumeros(const int &num1, const int &num2);
bool esPrimo(const int &num);
void ejecutarOpcion(int opcion, int &num1, int &num2);

int main() {
	int opcion, num1, num2;
	
	do {
		mostrarMenu();
		cout << "Ingrese su opcion: ";
		cin >> opcion;
		ejecutarOpcion(opcion, num1, num2);
	} while (opcion != 0);
	
	return 0;
}

// Funci�n para mostrar el men�
void mostrarMenu() {
	cout << "1. Ingresar\n2. Sumar\n3. Verificar primo\n0. Salir\n";
}

// Funci�n para ingresar dos n�meros por referencia
void ingresarNumeros(int &num1, int &num2) {
	cout << "Ingrese dos numeros: "; cin >> num1 >> num2;
}

// Funci�n para sumar dos n�meros dados por referencia
int sumarNumeros(const int &num1, const int &num2) {
	return num1 + num2;
}

// Funci�n para verificar si un n�mero dado por referencia es primo
bool esPrimo(const int &num) {
	if (num < 2) return false;
	for (int i = 2; i * i <= num; ++i) if (num % i == 0) return false;
	return true;
}

// Funci�n para ejecutar la opci�n seleccionada
void ejecutarOpcion(int opcion, int &num1, int &num2) {
	switch (opcion) {
	case 1: ingresarNumeros(num1, num2); break;
	case 2: cout << "Suma: " << sumarNumeros(num1, num2) << endl; break;
	case 3: cout << (esPrimo(num1) ? "Primo.\n" : "No primo.\n"); break;
	case 0: cout << "Saliendo.\n"; break;
	default: cout << "Opcion no valida.\n";
	}
}

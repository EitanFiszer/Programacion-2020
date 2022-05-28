#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int pedirInt(string mensaje) {
	int valor;
	cout << mensaje<<endl;
	cin >> valor;
	return valor;
}

string pedirString(string mensaje) {
	string valor;
	cout << mensaje<<endl;
	cin >> valor;
	return valor;
}

bool esEdad(int edad) {
	bool valido;
	if (edad < 18 || edad>40) {
		valido = true;
	}
	else {
		valido = false;
	}
	return valido;
}

bool es0(int cantAlum) {
	bool valido;
	if (cantAlum == 0) {
		valido = true;
	} 
	else {
		valido = false;
	}
	return valido;
}

bool esMayor30(int edad) {
	bool valido;
	if (edad >= 30) {
		valido = true;
	}
	else {
		valido = false;
	}
	return valido;
}

bool esFin(string apellido,string texto_fin) {
	bool valido;
	if (apellido!=texto_fin) {
		valido = true;
	}
	else {
		valido = false;
	}
	return valido;
}

bool esEdadMasGrande(int edad, int edadMasGrande) {
	bool valido;
	if (edad == edadMasGrande) {
		valido = true;
	}
	else {
		valido = false;
	}
	return valido;
}

int pedirEdad(string mensaje, string error) {
	int valor;
	valor = pedirInt(mensaje);
	while (esEdad(valor)) {
		valor = pedirInt(error);
	}
	return valor;
}

float calcularPromedio(int suma_de_edad, int cantAlumno) {
	float promedio;
	promedio = suma_de_edad / cantAlumno;
	return promedio;
}

int calcularEdadGrande(int edad, int masGrande) {
	int resultado;
	if (edad < masGrande){
		resultado = masGrande;
	}
	else{
		resultado = edad;
	}
	return valido;
}
 
void final(int promedio, int edadMasGrande, int mayores30, string apellido) {
	cout << "El promedio es de: " << promedio << endl;
	cout << "La edad más grande es de: " << edadMasGrande;
	cout << " y la persona con la mayor edad se apellida: " << apellido << endl;
	cout << "La cantidad de personas mayores a los 30 años es de " << mayores30 << endl;
}

void main() {
	setlocale(LC_ALL, "spanish");

	string apellido;
	string apellido_del_más_grande;
	int suma_de_edad;
	suma_de_edad = 0;
	int cantAlumno;
	cantAlumno = 0;
	int edad;
	int edadMasGrande;
	edadMasGrande = 0;
	int mayores_30;
	mayores_30 = 0;
	float promedio;

	const string INICIO = "Bienvenido al programa de ORT Senior. Ingrese el apellido y edad del usuario, y para finalizar el programa ingrese FIN cuando pide el apellido. \nIngrese su apellido";
	const string APELLIDO = "Hola, ingrese su apellido.";
	const string EDAD = "Ingrese su edad";
	const string ERROR = "Error, vuelve a intentarlo";
	const string TEXTO_DE_FIN = "FIN";



	do  {
		apellido = pedirString(INICIO);
		if (esFin(apellido, TEXTO_DE_FIN)) {
			edad = pedirEdad(EDAD, ERROR);
			suma_de_edad = suma_de_edad + edad;
			cantAlumno++;
			if (esEdadMasGrande(edad, edadMasGrande)){
				edadMasGrande=edad;
				apellido_del_más_grande = apellido;
			}
			if (esMayor30(edad)) {
				mayores_30++;
			}
		}
	} while (esFin(apellido, TEXTO_DE_FIN));
	if(es0(cantAlumno)){
		cout << "terminó el programa";
	}
	else {
		promedio = calcularPromedio(suma_de_edad, cantAlumno);
		final(promedio, edadMasGrande, mayores_30, apellido_del_más_grande);
	}
}
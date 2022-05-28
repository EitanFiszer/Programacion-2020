#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void mensajes(string mensaje) {
	cout << mensaje << endl;
	cin.get();
}

bool sonDistintos(int dado1, int dado2, int dado3, int dado4, int dado5) {
	bool valido;
	if ((dado1 != dado2 && dado1 != dado3 && dado1 != dado4 && dado1 != dado5 && dado2 != dado3 && dado2 != dado4 && dado2 != dado5 && dado3 != dado4 && dado3 != dado5 && dado4 != dado5)) {
		valido = true;
	}
	else {
		valido = false;
	}
	return valido;
}

int pedirCaras(string mensajes, string error) {
	int valor;
	cout << mensajes << endl;
	cin >> valor;
	while (valor > 10 || valor < 3) {
		cout << error << endl;
		cin >> valor;
	}
	return valor;
}

int random(int caras) {
	int valor;
	valor = 1 + rand() % (caras);
	return valor;
}

bool esGenerala(int dado1, int dado2, int dado3, int dado4, int dado5) {
	bool valido;
	if (dado1 == dado2 && dado2 == dado3 && dado3 == dado4 && dado4 == dado5) {
		valido = false;
	}
	else {
		valido = true;
	}
	return valido;
}

string pedirString(string mensaje) {
	string valor;
	cout << mensaje << endl;
	cin >> valor;
	return valor;
}

string pedirTipo(string mensaje, string error) {
	string valor;
	valor = pedirString(mensaje);
	while (valor != "E" && valor != "C") {
		valor = pedirString(error);
	}
	return valor;
}

bool esExtra3(string tipo) {
	bool valido;
	if (tipo == "C") {
		valido = true;
	}
	else {
		valido = false;
	}
	return valido;
}

bool esEscalera(int dado1, int dado2, int dado3, int dado4, int dado5) {
	bool valido;
	int total;
	total = dado1 + dado2 + dado3 + dado4 + dado5;
	if (total == 15 || total == 19 || total == 20) {
		valido = true;
	}
	else {
		valido = false;
	}
	return valido;
}

void main() {
	setlocale(LC_ALL, "spanish");
	int dado1;
	int dado2;
	int dado3;
	int dado4;
	int dado5;
	srand(time(NULL));
	int intentos;
	intentos = 1;
	int caras;
	const int CARAS_ESCALERA = 6;
	string tipo;

	const string INICIO = "Hola bienvenido a la Generala, por si no sabes jugar consiste en tirar 5 dados hasta que los 5 tengan el mismo valor. Cuando el resultado de todos los dados son distintos entre sí aparecerá en pantalla";
	const string LIMITES = "Escriba la cantidad de caras del dado. Puede ir de 3 a 10";
	const string TIRAR = "Apreta enter para tirar";
	const string ERROR = "Error, vuelve a intentarlo";
	const string DISTINTOS = "Salió una cadena de números distintos entre sí";
	const string TIPO = "Escriba E si quiere jugar con escalera o escriba C si quiere jugar decidir la cantidad de caras";
	const string ESCALERA = "Saco escalera";

	mensajes(INICIO);
	tipo = pedirTipo(TIPO,ERROR);
	if (esExtra3(tipo)) {
		caras = pedirCaras(LIMITES, ERROR);
		mensajes(TIRAR);
		do {
			intentos++;
			dado1 = random(caras);
			dado2 = random(caras);
			dado3 = random(caras);
			dado4 = random(caras);
			dado5 = random(caras);
			cout << dado1 << dado2 << dado3 << dado4 << dado5 << endl;
			if (sonDistintos(dado1, dado2, dado3, dado4, dado5)) {
				cout << DISTINTOS << endl;
			}
		} while (esGenerala(dado1, dado2, dado3, dado4, dado5));
	}
	else {
		mensajes(TIRAR);
		do {
			intentos++;
			dado1 = random(CARAS_ESCALERA);
			dado2 = random(CARAS_ESCALERA);
			dado3 = random(CARAS_ESCALERA);
			dado4 = random(CARAS_ESCALERA);
			dado5 = random(CARAS_ESCALERA);
			cout << dado1 << dado2 << dado3 << dado4 << dado5 << endl;
			if (sonDistintos(dado1, dado2, dado3, dado4, dado5)) {
				if (esEscalera(dado1, dado2, dado3, dado4, dado5)) {
					cout << ESCALERA << endl;
				}
				else {
					cout << DISTINTOS << endl;
				}
			}
		}
		}
	while (esGenerala(dado1, dado2, dado3, dado4, dado5));
		cout << intentos << " intentos tardó en ganar.";
	system("pause");
}

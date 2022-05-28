#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int pedirEntero_rango(string msj, string error, int tope) {
	int natural;
	cout << msj << endl;
	cin >> natural;
	while (natural < 0 || natural>tope) {
		cout << error << endl;
		cin >> natural;
	}
	return natural;
}

void mostrarLugares(int vector[], int tope) {
	cout << "Los asientos que se ocuparon fueron: " << endl;
	for (int i = 0; i < tope; i++) {
		if (vector[i] != 0) {
			cout << i + 1 << ", ";
		}
	}
}

int main() {
	setlocale(LC_ALL, "spanish");

	const int CANTIDAD_LUGARES = 11;
	const int FIN_DE_DATOS = 0;

	const string MENSAJE_PEDIR_LUGAR = "Ingrese el lugar que desee";
	const string MENSAJE_OCUPADO = "El asiento que eligió ya está tomado elija otro por favor";
	const string ERROR = "Error el lugar que marcó no existe";

	int vecLugares[CANTIDAD_LUGARES]{ 0 };
	int lugar_elegido;
	int cantidad_de_autos;
	float cantidad_vip;
	float cantidad_general;
	float porcentaje_VIP;
	float porcentaje_general;

	porcentaje_general = 0;
	porcentaje_VIP = 0;
	cantidad_de_autos = 0;
	cantidad_vip = 0;
	cantidad_general = 0;

	lugar_elegido = pedirEntero_rango(MENSAJE_PEDIR_LUGAR, ERROR, CANTIDAD_LUGARES);
	while (lugar_elegido != FIN_DE_DATOS && cantidad_de_autos < CANTIDAD_LUGARES ) {
		vecLugares[lugar_elegido - 1]++;
		if (vecLugares[lugar_elegido - 1] == 1) {
			cout << "El lugar que eligió está disponible" << endl;
			cantidad_de_autos++;
			if (lugar_elegido < (CANTIDAD_LUGARES / 2) + 1) {
				cantidad_vip++;
			}
			else {
				cantidad_general++;
			}
			lugar_elegido = pedirEntero_rango(MENSAJE_PEDIR_LUGAR, ERROR, CANTIDAD_LUGARES);
		}
		else {
			lugar_elegido = pedirEntero_rango(MENSAJE_OCUPADO, ERROR, CANTIDAD_LUGARES);
		}
	}
	if (cantidad_de_autos == 0) {
		cout << "No se vendió ni una entrada" << endl;
	}
	else {
		if (cantidad_de_autos == CANTIDAD_LUGARES - 1 && lugar_elegido != 0) {
			cout << "Todos los asientos estan ocupados, por lo que se vendió el 100 porciento de los de general y de lujo" << endl;
		}
		else {
			mostrarLugares(vecLugares, CANTIDAD_LUGARES);
			if (cantidad_vip > 0) {
				porcentaje_VIP = cantidad_vip / CANTIDAD_LUGARES * 200;
			}
			if (cantidad_general > 0) {
				porcentaje_general = cantidad_general / CANTIDAD_LUGARES * 200;
			}
			cout << endl;
			cout << "Se vendieron el " << porcentaje_VIP << " % de los asientos VIP y " << porcentaje_general << " % de los general";
		}
	}
	system("pause");
}
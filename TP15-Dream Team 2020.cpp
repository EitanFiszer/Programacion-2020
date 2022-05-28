#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

string pedirCadena(string msj) {
	string cadena;
	cout << msj << endl;
	cin >> cadena;

	return cadena;
}

float pedirFloat(string msj) {
	float real;
	cout << msj << endl;
	cin >> real;

	return real;
}

int pedirInt(string msj) {
	int entero;
	cout << msj << endl;
	cin >> entero;

	return entero;
}

int pedirNatural(string msj, string error) {
	int entero;
	entero = pedirInt(msj);
	while (entero <= 0) {
		entero = pedirInt(error);
	}
	return entero;
}

float pedirEdad(string msj, string error) {
	float entero;
	entero = pedirFloat(msj);
	while (entero < 15 || entero > 998) {
		entero = pedirFloat(error);
	}
	return entero;
}

float pedirAltura(string msj, string error) {
	float entero;
	entero = pedirFloat(msj);
	while (entero < 120 || entero>300) {
		entero = pedirFloat(error);
	}
	return entero;
}

float pedirEstadistica(string msj, string error) {
	float real;
	real = pedirFloat(msj);
	while (real < 1 || real>5) {
		real = pedirFloat(error);
	}
	return real;
}

string pedirNombreYApellido(string msj, int numero) {
	string cadena;
	cout << msj << numero << endl;
	cin >> cadena;

	return cadena;
}

string pedirConferencia(string msj, string este, string oeste, string error) {
	string cadena;
	cadena = pedirCadena(msj);
	while (cadena != este && cadena != oeste) {
		cadena = pedirCadena(error);
	}
	return cadena;
}

bool esElMayor(float datoActual, float elMayor) {
	bool valido;
	if (datoActual > elMayor) {
		valido = true;
	}
	else {
		valido = false;
	}
	return valido;
}

bool esElMenor(float datoActual, float elMenor) {
	bool valido;
	if (datoActual < elMenor) {
		valido = true;
	}
	else {
		valido = false;
	}
	return valido;
}


void fin_equipo(string nombre, string conferencia, string jugador) {
	cout << "El equipo " << nombre << " pertenece a la conferencia " << conferencia << " y su mejor jugador es " << jugador << endl;
}

void finPrograma(string equipo_mejor_rebotes, string jugador_más_alto_oeste, string equipo_menos_firme, string apellido_joven_más3scoring, string apellido_mejor_scoring_este, float promedio_este, float promedio_oeste, float cantidad_equipos_oeste, float cantidad_equipos_este) {
	cout << "El equipo con el mejor promedio de rebote es el " << equipo_mejor_rebotes << endl;
	cout << "El equipo menos firme es el " << equipo_menos_firme << endl;
	cout << "El jugador más joven y con más de 3 puntos de scoring es: " << apellido_joven_más3scoring << endl;
	if (cantidad_equipos_este == 0) {
		cout << "No se ingresó ningun equipo de la conferencia este." << endl;
	}
	else {
		cout << "El jugador con el mejor scoring de la conferencia este es: " << apellido_mejor_scoring_este << endl;
		cout << "El promedio de valoración de la conferencia este es " << promedio_este << endl;
	}
	if (cantidad_equipos_oeste == 0) {
		cout << "No se ingresó ningun equipo de la conferencia oeste." << endl;
	}
	else {
		cout << "El jugador más alto de la conferencia oeste es: " << jugador_más_alto_oeste << endl;
		cout << "El promedio de valoración de la conferencia oeste es " << promedio_oeste << endl;
	}
}

int main() {
	setlocale(LC_ALL, "spanish");

	//variables INGRESADAS por programa
	int cant_Equipos;


	//variables INGRESADAS por equipo
	string nombreEquipo;
	string conferencia;

	//variables INGRESADAS por jugador
	string apellido;
	float edad;
	float altura;
	float firmeza;
	float scoring;
	float rebote;

	//variables calculadas por jugador
	float promedio;

	//variables CALCULADAS por equipo
	float mejorPromedioXequipo;
	string mejorJugador_equipo;

	float mayorAlturaXequipo;
	string jugador_más_alto_equipo;

	float edad_joven_con_mas_scoringXequipo;
	string apellido_joven_más3scoringXequipo;

	float mejor_scoring_X_equipo;
	string apellido_mejor_scoring_equipo;

	float total_puntos_equipo;
	float total_puntos_rebote;
	float total_puntos_firmeza;

	//variables CALCULADAS por programa

	float promedioRebotes_equipos;
	float promedioFirmeza;

	float promedio_rebotes_mejor;
	string equipo_mejor_rebotes;

	float peor_promedio_firmeza;
	string equipo_menos_firme;

	float edad_joven_con_mas_scoring;
	string apellido_joven_más3scoring;

	float mejor_scoring_este;
	string apellido_mejor_scoring_este;

	float mayorAltura_oeste;
	string jugador_más_alto_oeste;


	float total_puntos_este;
	float total_puntos_oeste;

	float cantidad_equipos_oeste;
	float cantidad_equipos_este;

	float promedio_este;
	float promedio_oeste;




	//constantes
	const string CONFERENCIAESTE = "ESTE";
	const string CONFERENCIAOESTE = "OESTE";
	const string CANTIDAD_EQUIPOS = "Hola bienvenido al programa del Dream Team. Por favor ingrese la cantidad de equipos de los play off";
	const string PEDIRNOMBREEQUIPO = "Ingrese por favor el nombre del equipo ";
	const string PEDIRCONFERENCIA = "Ingrese a la conferencia donde pertenezca el equipo (ESTE u OESTE)";
	const string PEDIRAPELLIDO = "Ingrese el apellido del jugador ";
	const string PEDIREDAD = "Ingrese la edad";
	const string PEDIRALTURA = "Ingrese la altura en centimetros";
	const string PEDIRSCORING = "Ingrese del 1 al 5 la puntuación en scoring del jugador";
	const string PEDIRFIRMEZA = "Ingrese la puntuación de firmeza del jugador";
	const string PEDIRREBOTE = "Ingrese la puntuación de rebote del jugador";
	const string ERROR = "Error, vuelva a intentarlo";

	const int CANT_JUGADOR = 5;

	//inicializacion de variables por programa
	promedio_rebotes_mejor = 0;
	peor_promedio_firmeza = 6;
	edad_joven_con_mas_scoring = 999;
	mayorAltura_oeste = 0;
	mejor_scoring_este = 0;
	total_puntos_este = 0;
	total_puntos_oeste = 0;
	apellido_joven_más3scoring = "No hay jugador con más de 3 scoring";
	promedio_oeste = 0;
	promedio_este = 0;
	cantidad_equipos_oeste = 0;
	cantidad_equipos_este = 0;


	cant_Equipos = pedirNatural(CANTIDAD_EQUIPOS, ERROR);

	for (int i = 0; i < cant_Equipos; i++) {

		nombreEquipo = pedirNombreYApellido(PEDIRNOMBREEQUIPO, i + 1);
		conferencia = pedirConferencia(PEDIRCONFERENCIA, CONFERENCIAESTE, CONFERENCIAOESTE, ERROR);

		//inicialización de variables por equipo
		mejorPromedioXequipo = 0;
		mayorAlturaXequipo = 0;
		edad_joven_con_mas_scoringXequipo = 999;
		mejor_scoring_X_equipo = 0;
		total_puntos_rebote = 0;
		total_puntos_firmeza = 0;
		total_puntos_equipo = 0;



		for (int j = 0; j < CANT_JUGADOR; j++) {

			apellido = pedirNombreYApellido(PEDIRAPELLIDO, j + 1);
			edad = pedirEdad(PEDIREDAD, ERROR);
			altura = pedirAltura(PEDIRALTURA, ERROR);
			scoring = pedirEstadistica(PEDIRSCORING, ERROR);
			rebote = pedirEstadistica(PEDIRREBOTE, ERROR);
			firmeza = pedirEstadistica(PEDIRFIRMEZA, ERROR);

			promedio = (scoring + firmeza + rebote) / 3;
			total_puntos_equipo = total_puntos_equipo + (scoring + firmeza + rebote);

			if (esElMayor(promedio, mejorPromedioXequipo)) {
				mejorPromedioXequipo = promedio;
				mejorJugador_equipo = apellido;
			}
			if (esElMayor(altura, mayorAlturaXequipo)) {
				mayorAlturaXequipo = altura;
				jugador_más_alto_equipo = apellido;
			}
			if (esElMayor(scoring, 3)) {
				if (esElMenor(edad, edad_joven_con_mas_scoringXequipo)) {
					edad_joven_con_mas_scoringXequipo = edad;
					apellido_joven_más3scoringXequipo = apellido;
				}
			}
			if (esElMayor(scoring, mejor_scoring_X_equipo)) {
				mejor_scoring_X_equipo = scoring;
				apellido_mejor_scoring_equipo = apellido;
			}
			total_puntos_rebote = total_puntos_rebote + rebote;
			total_puntos_firmeza = total_puntos_firmeza + firmeza;

		}
		fin_equipo(nombreEquipo, conferencia, mejorJugador_equipo);


		promedioRebotes_equipos = total_puntos_rebote / 5;
		promedioFirmeza = total_puntos_firmeza / 5;

		if (esElMayor(promedioRebotes_equipos, promedio_rebotes_mejor)) {
			promedio_rebotes_mejor = promedioRebotes_equipos;
			equipo_mejor_rebotes = nombreEquipo;
		}
		if (esElMenor(promedioFirmeza, peor_promedio_firmeza)) {
			peor_promedio_firmeza = promedioFirmeza;
			equipo_menos_firme = nombreEquipo;
		}
		if (esElMenor(edad_joven_con_mas_scoringXequipo, edad_joven_con_mas_scoring)) {
			edad_joven_con_mas_scoring = edad_joven_con_mas_scoringXequipo;
			apellido_joven_más3scoring = apellido_joven_más3scoringXequipo;
		}
		if (conferencia == CONFERENCIAOESTE) {
			total_puntos_oeste = total_puntos_oeste + total_puntos_equipo;
			cantidad_equipos_oeste = cantidad_equipos_oeste + 1;
			if (esElMayor(mayorAlturaXequipo, mayorAltura_oeste)) {
				mayorAltura_oeste = mayorAlturaXequipo;
				jugador_más_alto_oeste = jugador_más_alto_equipo;
			}
		}
		else {
			total_puntos_este = total_puntos_este + total_puntos_equipo;
			cantidad_equipos_este = cantidad_equipos_este + 1;
			if (esElMayor(mejor_scoring_X_equipo, mejor_scoring_este)) {
				mejor_scoring_este = mejor_scoring_X_equipo;
				apellido_mejor_scoring_este = apellido_mejor_scoring_equipo;
			}
		}

	}
	if (cantidad_equipos_oeste!=0){
		promedio_oeste = total_puntos_oeste / cantidad_equipos_oeste;
	}
	if (cantidad_equipos_este != 0) {
		promedio_este = total_puntos_este / cantidad_equipos_este;
	}


	
	finPrograma(equipo_mejor_rebotes, jugador_más_alto_oeste, equipo_menos_firme, apellido_joven_más3scoring, apellido_mejor_scoring_este, promedio_este, promedio_oeste, cantidad_equipos_oeste, cantidad_equipos_este);

	system("pause");
}

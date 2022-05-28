#include <iostream>
#include <ctime>
using namespace std;


//mensaje de despedida
void despedida(string mens1, string mens2, string mens3, string nombre, time_t minutos, time_t segundos) {
    cout << mens1 << nombre << mens2 << nombre << endl;
    cin.get();
    cout << "Usted tard� " << minutos << ": " << segundos << " en completar la sala de escape" << endl;
    cout << mens3;
}

//mostrar mensajes
void mensajes(string mensaje) {
    cout << mensaje << endl;
    cin.get();
}

//pide el string
string pedirString(string mensajes) {
    string valor;
    cout << mensajes << endl;
    cin >> valor;

    return valor;
}

//pide la respuesta de cada sala
string salas(string mensaje1, string mensaje2, string mensaje3) {
    string valor;
    cout << mensaje1 << endl;
    cin.get();
    cout << mensaje2 << endl;
    cin.get();
    cout << mensaje3 << endl;
    cin >> valor;

    return valor;
}

//pide la respuesta despues de la pista
string respuestaconPista(string PISTA) {
    string valor;

    cout << PISTA << endl;
    cin >> valor;

    return valor;
}

//pide la respuesta despues de un error
string respuestaconError(string vida) {
    string valor;
    cout << vida << endl;
    cin >> valor;

    return valor;
}

//valida la respuesta
bool estaBien(string respuesta, string correcta) {
    bool valido;
    if (respuesta == correcta || respuesta == "PISTA") {
        valido = true;
    }
    else {
        valido = false;
    }
    return valido;
}

//valida si pidi� pista
bool esPista(string respuesta) {
    bool valido;
    if (respuesta == "PISTA") {
        valido = true;
    }
    else {
        valido = false;
    }
    return valido;
}

//revisa si ya se qued� sin vidas
bool error(int errores) {
    bool valido;
    if (errores < 3) {
        valido = true;
    }
    else {
        valido = false;
    }
    return valido;
}


void main() {

    setlocale(LC_ALL, "spanish");

    //declaraci�n de variables
    string nombre;
    string sala1;
    string sala2;
    string sala3;
    string sala4;
    int errores;
    errores = 1;

    time_t T_Inicial;
    time_t T_Final;
    int tiempo;
    int minutos;
    int segundos;
    int minutos2;
    int segundo2;

    T_Inicial = 0;
    T_Final = 0;
    tiempo = T_Final - T_Inicial;

    //declaraci�n de constantes
    const string INTRODUCCI�N = "Bienvenido a la sala de escape CRIMEN. Por s� nunca jugaste una te lo explico rapido. \nConsiste en habitaciones las cuales tienen retos que tenes que pasar para ir a la siguiente habitaci�n hasta que al final salis. ";
    const string TEMA = "Ahora que sabes que es una sala de escape te voy a explicar en que consiste esta. \nVas a estar encerrado en habitaciones con sospechosos. Tu misi�n va a  ser advinar al culpable. En caso de necesitar ayuda escribe PISTA y solo vas a tener 3 vidas.";
    const string NOMBRE = "Empecemos con tu personaje, �C�mo te llamas?";
    const string FINAL_DE_INICIO = "Perfecto podemos empezar";

    const string INICIO_ESCENARIO1 = "Hubo un asesinato en un Motel de una se�orita durante un corte de luz,gas y agua de 1 hora . En la autopsia se descubri� que muri� asfixiada. Los sospechosos son  su acompa�ante y la mucama.\n La coartada de cada uno son las siguientes:";
    const string COARTADAS = "�l dice que fue a buscar velas para iluminar la habitaci�n y cuando volvi� la hay� muerta.\n Ella dice que fue al cuarto porque ella llam� a recepci�n para que vaya a entregarle la clave del wifi y cuando entr� hayo el cadaver.";
    const string CONCLUSION1 = "�Qui�n la mat�? (MUCAMA o ACOMPA�ANTE); todas las respuestas en mayuscula.";

    const string INICIONIVEL = "Es Momento de pasar de nivel";
    const string INICIO_SEGUNDO_NIVEL = "Has sido ascendido como cadete y te han encargado el homicidio del alcalde.\n Fue un tiro de la cabeza a larga distancia.\n El atentado fue durante un d�a llovioso por lo que vas a la unica tienda de armas del barrio.";
    const string CONCLUSI�N2 = "Alli te dicen que las ultimas personas que compraron un francotirador fueron el cura Jorge que dijo que estaba dando misa, el lider de la opos�ci�n Alfred que dijo que estaba en su casa y el Jardinero Johnson que estaba regando las plantas.\n �Qui�n es el asesino? (JARDINERO, CURA O OPOSICION)";

    const string INICIO_TERCER_NIVEl = "Tu reputaci�n ha aumentado todo el mundo te conoce.\n Tu popularidad es tan alta que te contrata el Presidente para resolver un crimen de maxima seguridad.\n Hubo un asesinato en la residencia presidencial por lo que la vida del presidente est� en peligro";
    const string INICIO_TERCER_NIVEL2 = "Muri� un guardia. La causa de la muerte fue asfix�a, durante una entrevista en vivo al presidente y el intendente.";
    const string CONCLUSI�N3 = "Los posibles sospechosos son: INTENDENTE, PRESIDENTE, SECRETARIO o PERIODISTA.\n �Qui�n es el asesino?";

    const string INICIO_ULTIMO_NIVEL = "Luego de resolver con exito tu ultimo caso llegas a la cuspide de tu carrera y a final de a�o te van a ascender como jefe";
    const string INICIO_ULTIMO_NIVEL2 = "Pero le prestas a tu amigo tu auto un domingo y al encender el motor tu amigo se fue al mas alla :(.";
    const string CONCLUSI�N4 = "Por lo que fue un intento de asesinato hacia vos.\n Por lo que revisas la lista de las personas que pudieron haber entrado al Garage y son:\n El conserje que dijo que estaba en el ba�o.\n La vicejefa que se defendi� diciendo que ese d�a se sinti� mal y no fue.\n El jefe que dijo que hab�a salido a buscar a sus hijos del colegio.\n El oficial Johnson que dij� que estaba interrogando a un sospechoso.�Quien quiso matarte? (CONSERJE, JEFE, VICEJEFA U OFICIAL)";

    const string FINAL1 = "Te felicito empezaste el juego siendo el novato ";
    const string FINAL2 = " y te convertiste en el jefe ";
    const string FINAL3 = " FELICIDADES TE GANASTE UNA CARITA FELIZ :)";

    const string VIDA = "PERDISTE UNA VIDA, VUELVE A INTENTARLO";
    const string PERDISTE = "GAME OVER";
    const string CORRECTO = "CORRECTO!!!";
    const string ESPACIO = "";

    const string HOMICIDA = "MUCAMA";
    const string HOMICIDA2 = "JARDINERO";
    const string HOMICIDA3 = "SECRETARIO";
    const string HOMICIDA4 = "JEFE";


    const string PISTA1 = "habia un corte de luz";
    const string PISTA2 = "estaba lloviendo";
    const string PISTA3 = "fue durante una entrevista en vivo";
    const string PISTA4 = "era domingo";

    //introducci�n al programa
    mensajes(INTRODUCCI�N);
    mensajes(TEMA);
    nombre = pedirString(NOMBRE);
    mensajes(FINAL_DE_INICIO);
    mensajes(ESPACIO);
    system("cls");
    system("color 70");
    T_Inicial = time(0);


    //sala 1
    sala1 = salas(INICIO_ESCENARIO1, COARTADAS, CONCLUSION1); //pide la respuesta
    while (sala1 != HOMICIDA && errores < 3 || sala1=="PISTA") { //mientras que la respuesta no sea la correcta y los erroes sean menores a 3
        if (esPista(sala1)) {//si pide pista
            sala1 = respuestaconPista(PISTA1);
        }
        else if (error(errores)) {//si respondi� mal
            errores = errores + 1;
            sala1 = respuestaconError(VIDA);
        }
    }
    if (estaBien(sala1, HOMICIDA)) {//respondi� bien
        mensajes(CORRECTO);
        system("cls");
        system("color F0");

        //sala 2
        sala2 = salas(INICIONIVEL, INICIO_SEGUNDO_NIVEL, CONCLUSI�N2);
        while (sala2 != HOMICIDA && errores < 3 || sala2 == "PISTA") {
            if (esPista(sala2)) {
                sala2 = respuestaconPista(PISTA2);
            }
            else if (error(errores)) {
                errores = errores + 1;
                sala2 = respuestaconError(VIDA);
            }
        }
        if (estaBien(sala2, HOMICIDA2)) {
            mensajes(CORRECTO);
            mensajes(ESPACIO);
            system("cls");
            system("color 60");

            //sala 3
            sala3 = salas(INICIO_TERCER_NIVEl, INICIO_TERCER_NIVEL2, CONCLUSI�N3);
            while (sala3 != HOMICIDA && errores < 3 || sala3 == "PISTA") {
                if (esPista(sala3)) {
                    sala3 = respuestaconPista(PISTA3);
                }
                else if (error(errores)) {
                    errores = errores + 1;
                    sala3 = respuestaconError(VIDA);
                }
            }
            if (estaBien(sala3, HOMICIDA3)) {
                mensajes(CORRECTO);
                mensajes(ESPACIO);
                system("cls");
                system("color 1F");

                //sala 4
                sala4 = salas(INICIO_ULTIMO_NIVEL, INICIO_ULTIMO_NIVEL2, CONCLUSI�N4);
                while (sala4 != HOMICIDA && errores < 3 || sala4 == "PISTA") {
                    if (esPista(sala4)) {
                        sala4 = respuestaconPista(PISTA4);
                    }
                    else if (error(errores)) {
                        errores = errores + 1;
                        sala4 = respuestaconError(VIDA);
                    }
                }
                if (estaBien(sala4, HOMICIDA4)) {
                    mensajes(CORRECTO);
                    mensajes(ESPACIO);
                    system("cls");
                    system("color A0");

                    T_Final = time(0);
                    tiempo = T_Inicial - T_Final;

                    minutos2 = tiempo / 60;
                    segundo2 = tiempo % 60;
                    segundos = segundo2 - segundo2 - segundo2;
                    minutos = minutos2 - minutos2 - minutos2;

                    //final del programa con exito
                    despedida(FINAL1, FINAL2, FINAL3, nombre, minutos, segundos);


                    //sin vidas
                }
                else {
                    system("cls");
                    system("color C0");
                    mensajes(PERDISTE);
                }
            }
            else {
                system("cls");
                system("color C0");
                mensajes(PERDISTE);
            }
        }
        else {
            system("cls");
            system("color C0");
            mensajes(PERDISTE);
        }
    }
    else {
        system("cls");
        system("color C0");
        mensajes(PERDISTE);
    }
    system("pause");
}
#include <iostream> 
using namespace std;

void saludo(string mensaje, float apertura, float cierre){

cout<<mensaje<<apertura<<" a "<<cierre<<endl;
}

//pedir hora
float pedirFloat(string mensaje){
  float valor;

  cout<<mensaje<<endl;
  cin>>valor;

  return valor;
}

//mensajes
void Mensajes(string mensaje){
  cout<<mensaje<<endl;
}

//validar la hora
bool pedirBool(float hora, float minimo, float maximo){
  bool valido;
  if(hora<maximo && hora>=minimo){
  valido = true;
  }else{
    valido=false;
  }
return valido;
}

//validar el estado del estacionamiento


int main() {

//declaración de variables
float hora;

//declaración de constantes
const float INICIO_DIA=0;
const float FINAL_DIA=24;
const float APERTURA=10; 
const float CIERRE=18;
const string MENSAJESALUDO="Bienvenido al programa del estacionamiento Bruselas. El horario de actividad del estacionamiento es: ";
const string MENSAJEDEHORA="Ingrese la hora interesada";
const string MENSAJE_ERROR="Ha ingresado una hora incorrecta-ESTACIONAMIENTO BRUSELAS";
const string MENSAJECIERRE="El estacionamiento Bruselas está cerrado";
const string MENSAJEABIERTO="El estacionamiento Bruselas está abierto";

//llamar funciones
saludo(MENSAJESALUDO, APERTURA, CIERRE);
hora=pedirFloat(MENSAJEDEHORA);

if (pedirBool(hora,INICIO_DIA,FINAL_DIA)){
if(pedirBool(hora,APERTURA,CIERRE)){

Mensajes(MENSAJEABIERTO);

}else{

Mensajes(MENSAJECIERRE);
}
}else{
Mensajes(MENSAJE_ERROR);
}
}

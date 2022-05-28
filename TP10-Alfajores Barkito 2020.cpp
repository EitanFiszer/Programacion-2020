#include <iostream>
using namespace std;

//pedir radio
float pedirFloat(string Mensaje){
float valor;

cout<<Mensaje<<endl;
cin>>valor;

return valor;
}

//pedir tipo
string pedirString(string Mensaje){
string valor;

cout<<Mensaje<<endl;
cin>>valor;
return valor;
}

//comprobar sí esta bien el radio
bool estaEnRango(float radio, float minimo, float maximo){
  bool valido;

  if(radio<=maximo && radio>=minimo){
  valido = true;
  
  }else{
    valido=false;
  }

return valido;
}

//comprobar sí está bien el tipo
bool estaBienTipo(string Tipo){
  bool valido;

  if((Tipo == "SIMPLE")||(Tipo == "DOBLE")||(Tipo == "TRIPLE")){
  valido = true;

  }else{
    valido=false;
  }
return valido;
}

//mensajes en sí
void mensajes(string mensaje){
cout<<mensaje<<endl;
}

//comprobar sí es simple
bool esSimple(string tipo){
  bool valido;

if(tipo=="SIMPLE"){
  valido = true;

}else{
  valido=false;
}  
return valido;
}

//comprobar sí es doble
bool esDoble(string tipo){
  bool valido;

if(tipo=="DOBLE"){
  valido = true;

}else{
  valido=false;
}  
return valido;
}

//calculo precio final
float sacarPrecioFinal(float diametro, float OPERANDO, float SIMPLE, float DOBLE, float TRIPLE,string tipo_alfajor){
float precio;

  if(esSimple(tipo_alfajor)){
precio=SIMPLE+(diametro*OPERANDO);

  }else{
  if(esDoble(tipo_alfajor)){
    precio=DOBLE+(diametro*OPERANDO);

  }else{
    precio=TRIPLE+(diametro*OPERANDO);
  }  
  }
return precio;
}

//mostrar precio final
void MostrarPrecio(float precio, string mensaje, string mensaje2){
  cout<<mensaje<<precio<<mensaje2<<endl;
}


int main() {

//declarar variables
string tipo_alfajor;
float radio;
float diametro;
float precio_final;

//declarar constantes float
const float MAXIMO_RADIO=5;
const float MINIMO_RADIO=3;
const float VALOR_FIJO_SIMPLE=10;
const float VALOR_FIJO_DOBLE=15;
const float VALOR_FIJO_TRIPLE=20;
const float OPERANDO=5;

//declarar constantes string
const string SALUDO="Hola, bienvenido al programa de alfajores Barkito.";
const string MENSAJE_PEDIR_STRING="Ingrese por favor el tipo de alfajor que desee (SIMPLE,DOBLE O TRIPLE).";
const string MENSAJE_PEDIR_RADIO="Ingrese la medida del radio del alfajor en cm.";

const string DESECHADO="El alfajor será desechado.";
const string ERROR_TIPO="Error en el tipo de alfajor, por favor ingrese todo en mayuscula o escriba bien.";

const string FINAL="El valor de precio de venta es: ";
const string FINAL2=" pesos.";
const string DESPEDIR= "Gracias por usar el Programa Barkito!";

//llamar a saludar
mensajes(SALUDO);

//llamar a pedir radio
radio=pedirFloat(MENSAJE_PEDIR_RADIO);
diametro=radio*2;

//ver si esta bien el radio
if (estaEnRango(radio,MINIMO_RADIO,MAXIMO_RADIO)){
tipo_alfajor=pedirString(MENSAJE_PEDIR_STRING);

//ver si esta bien el tipo
if(estaBienTipo(tipo_alfajor)){

//sacar precio
precio_final=sacarPrecioFinal(diametro,OPERANDO,VALOR_FIJO_SIMPLE,VALOR_FIJO_DOBLE,VALOR_FIJO_TRIPLE,tipo_alfajor);

//mostrar precio final
MostrarPrecio(precio_final,FINAL,FINAL2);

//despedir
mensajes(DESPEDIR);
}else{

//mostrar error en el tipo
mensajes(ERROR_TIPO);  
}
}else{

//mostrar error en radio  
mensajes(DESECHADO);
}
}
#include <iostream> 
using namespace std;

void saludar(){
cout<<"Bienvenido a Stank Company."<<endl;
}

float pedir_unitario(){
  float coste_unitario;
cout<<"Ingrese el precio unitario del producto."<<endl;
cin>>coste_unitario; 
return coste_unitario;
}

int pedir_cantidad(){
int unidades;
cout<<"Ingrese la cantidad de unidades que desea llevar."<<endl;
cin>>unidades; 
return unidades;
}

char pedir_tipo(){
char metodo;
cout<<"Ingrese el metodo con el que se quiere pagar: tarjeta o efectivo (T o E). En mayuscula"<<endl;
cin>>metodo;  
return metodo;
}

float condicionales(float unitario,int cantidad,char tipo,float E5,float EMENOS5,float T1000){
float resultado;

if(tipo == 'E' && cantidad > 5 ){ 
resultado = unitario * E5 * cantidad;
}

else if(tipo == 'E' && cantidad <= 5){ 
resultado = unitario * EMENOS5 * cantidad; 
}

else if(tipo == 'T'  && unitario >= 1000){ 
resultado = unitario * T1000 * cantidad; 
}

else if(tipo == 'T' && unitario < 1000){ 
resultado = unitario * cantidad;
}

return resultado;
}

void fin(float precio_final);{
cout<<"El precio total que la persona debe abonar es "<<precio_final<<" pesos."<<endl;
cout<<"¡Muchas gracias por pedir en Stank company!¡Vuelva pronto!"<<endl;
}

int main(){

float unitario;
int cantidad;
char tipo;
float precio_final;

const float E5=0.9;
const float EMENOS5=0.95;
const float T1000=0.85;

saludar();
unitario=pedir_unitario();
cantidad=pedir_cantidad();
tipo=pedir_tipo();
precio_final=condicionales(unitario,cantidad,tipo,E5,EMENOS5,T1000);
fin(precio_final);
}

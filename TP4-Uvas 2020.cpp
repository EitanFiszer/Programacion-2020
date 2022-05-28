#include <iostream> //coneccion con teclado y pantalla
using namespace std;

//definición del programa principal
int main() {

const float PRECIOINICIAL=90;
const float PRECIO1A= 0.2;
const float PRECIO2A= 0.3;
const float PRECIO1B= 0.3;
const float PRECIO2B= 0.5;
float cantidaddekilos;
char tipodeuva;
int tamañodeuva;
float precio;


cout << "Bienvenido a Ort Finca"<<endl;

cout << ""<<endl;//espacio 

cout << "El precio inicial del kilo de uva es de "<<PRECIOINICIAL<<"$"<<endl;
cout << "Hay distintas variaciones de tipos de uvas y tamaños" <<endl;

cout << ""<<endl;//espacio 

cout << "En caso de elegir el tipo A:" <<endl;
cout << "tamaño 1 se cargara "<<PRECIO1A<< "$"<<endl;
cout << "tamaño 2 se cargara "<<PRECIO2A<<"$"<<endl;

cout << ""<<endl;//espacio 

cout << "En caso de elegir el tipo B:" <<endl;
cout << "tamaño 1 se rebajara "<<PRECIO1B<<"$"<<endl;
cout << "tamaño 2 se rebajara "<<PRECIO2B<<"$"<<endl;

cout << ""<<endl;//espacio 

cout <<"ingrese el tipo de uva que desee"<<endl;
cin>>tipodeuva;

cout <<"ingrese el tamaño que desee"<<endl;
cin >> tamañodeuva;

if(tipodeuva == 'A'){

if(tamañodeuva==1){

precio = (PRECIOINICIAL +PRECIO1A); 

cout << "Usted pidió el tipo de uva A y tamaño 1. Por lo que el precio de su pedido va a ser de "<<precio<<" pesos"<<endl;

}else{
 
precio = (PRECIOINICIAL + PRECIO2A); 

cout << "Usted pidió tipo de uva A y tamaño 2. Por lo que el precio de su pedido va a ser de "<<precio<<" pesos"<<endl;
}

}else{

if(tamañodeuva==1){

precio = (PRECIOINICIAL - PRECIO1B); 

cout << "Usted pidió tipo de uva B y tamaño 1. Por lo que el precio de su pedido va a ser de "<<precio<<" pesos"<<endl;

}else{
 
precio = (PRECIOINICIAL - PRECIO2B);

cout << "Usted pidió tipo de uva B y tamaño 2. Por lo que el precio de su pedido va a ser de "<<precio<<" pesos"<<endl;
}

}

cout << "Gracias por pedir en ORT Finca ¡Vuelva pronto!";
}

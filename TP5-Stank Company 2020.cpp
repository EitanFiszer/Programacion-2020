#include <iostream> //coneccion con teclado y pantalla
using namespace std;

//definición del programa principal
int main() {

float preciounitario;
int cantidad;
char tipo;
float precio;
const float E5=0.9;
const float EMENOS5=0.95;
const float T1000=0.85;

cout<<"Bienvenido a Stank Company."<<endl;
cout<<""<<endl;//espacio
cout<<"Ingrese el precio unitario del producto."<<endl;
cin>>preciounitario; //ingreso del precio unitario
cout<<""<<endl;//espacio
cout<<"Ingrese la cantidad de unidades que se va a llevar."<<endl;
cin>>cantidad; //ingreso de la cantidad
cout<<""<<endl;//espacio
cout<<"Ingrese el metodo con el que se quiere pagar: tarjeta o efectivo (T o E)."<<endl;
cin>>tipo; //ingreso del tipo de forma que se va a pagar
cout<<""<<endl; //espacio

if(tipo == 'E' && cantidad > 5){ //si se pide más de 5 productos y se paga en efectivo

precio = preciounitario * E5 * cantidad;
}

else if(tipo == 'E' && cantidad <= 5){ //si se pide menos o igual que 5 y se paga en efectivo

precio = preciounitario * EMENOS5 * cantidad; 
}
else if(tipo == 'T' && preciounitario >= 1000){ //si el precio unitario es mayor o igual a mil y se paga con tarjeta

precio = preciounitario * T1000 * cantidad; 
}
else if(tipo == 'T' && preciounitario < 1000){ //si el precio unitario es menor a 1000 y se paga con tarjeta

precio = preciounitario * cantidad;
}

cout<<"El precio total que la persona debe abonar es "<<precio<<" pesos."<<endl;
cout<<"¡Muchas gracias por pedir en Stank company!¡Vuelva pronto!"<<endl;
}

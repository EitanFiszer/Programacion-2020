#include <iostream> //coneccion con teclado y pantalla
using namespace std;

//definición del programa principal
int main() {

float numero1;
float numero2;
float suma;
float resta;
float cociente;
float producto;

cout<<"ingrese numero 1"<<endl;
cin>>numero1;
cout<<"ingrese numero 2"<<endl;
cin>>numero2;

suma = numero1 + numero2;
resta = numero1 - numero2;
producto = numero1 * numero2;
cociente = numero1 / numero2;

if(numero2 == 0){
cout<<"el resultado de la suma es "<< suma <<endl;
cout<<"el resultado de la resta es "<< resta <<endl;
cout<<"el resultado del producto es "<< producto <<endl;
cout<<"NO SE PUEDE DIVIDIR POR 0"<<endl;

}else{
cout<<"el resultado de la suma es "<< suma <<endl;
cout<<"el resultado de la resta es "<< resta <<endl;
cout<<"el resultado del producto es "<< producto <<endl;
cout<<"el resultado del cociente es "<< cociente <<endl;
}
}



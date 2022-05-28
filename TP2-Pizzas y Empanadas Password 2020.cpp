#include <iostream> //coneccion con teclado y pantalla
using namespace std;

//definición del programa principal
int main() {

  string nombreUsuario; //declaración del nombre del cliente
  int muzarella; //cantidad de pizzas de muzarella
  int jamonymorrones; //cantidad de pizzas de jamon y morrones
  int fugazzeta; //cantidad de pizzas de fugazzeta
  int napolitana; //cantidad de pizzas napolitana
  string tipodecocción; //tipo de cocción de la pizzas
  int pollo; //cantidad de empanadas de pollo
  int carne; //cantidad de empanadas de carne
  int jamonyqueso; //cantidad de empanadas de jamon y queso
  string tipodecocción2; //tipo de cocción de las empanadas
  int precio; // el numero del precio
  int cantempanadas; //cantidad total de empanadas
  int cantpizzas; //cantidad total de pizzas

  cout << "¡Hola, bienvendido a Password!"<<endl;
  cout << "Ingrese su nombre de usuario, por favor"<<endl;
  cin >> nombreUsuario; //entrada del valor de nombreUsuario
  cout << "Hola "<<nombreUsuario<<endl;
 
  cout << "¿cuantas pizzas de muzarella desea? Estan a 400 pesos cada una."<<endl;
  cin >> muzarella; //entrada del valor de muzarella
  
  cout << "¿cuantas pizzas de jamon y morrones desea? Estan a 460 pesos cada una"<<endl;
  cin >> jamonymorrones; //entrada del valor de jamonymorrones
  
  cout << "¿cuantas pizzas de fugazzeta desea? Estan a 400 pesos cada una"<<endl;
  cin >> fugazzeta; //entrada del valor de fugazzeta
 
  cout << "¿cuantas pizzas de napolitana desea? Estan a 430 pesos cada una"<<endl;
  cin >> napolitana; //entrada del valor de napolitana
  
  cout << "¿Qué tipo de cocción desea para las pizzas?¿A la piedra o media masa? "<<endl;
  cin >> tipodecocción; //entrada del valor del tipodecocción

  cout << "¿cuantas empanadas de pollo desea? Estan 50 pesos cada una"<<endl;
  cin >> pollo; //entrada del valor de pollo
  
  cout << "¿cuantas empanadas de carne desea? Estan 50 pesos cada una"<<endl;
  cin >> carne; //entrada del valor de carne
   
  cout << "¿cuantas empanadas de jamon y queso desea? Estan 50 pesos cada una"<<endl;
  cin >> jamonyqueso; //entrada del valor de jamonyqueso
  
  cout << "¿Qué tipo de cocción desea para las empanadas?¿Al horno o fritas?"<<endl;
  cin >> tipodecocción2; //entrada del valor de tipodecocción2;
    
  precio = (muzarella+fugazzeta)*400+(pollo+carne+jamonyqueso)*50+jamonymorrones*460+napolitana*430; //precio total
  cantpizzas = muzarella+fugazzeta+jamonymorrones+napolitana; //cantidad de pizzas ordenadas
  cantempanadas = pollo+carne+jamonyqueso; //cantidad de empánadas ordenadas

  
  cout <<"su pedido es"<<endl; 
  cout <<muzarella<<" de muzarella"<<endl;
  cout <<jamonymorrones<<" de jamon y morrones"<<endl;
  cout <<fugazzeta<<" de fugazzeta"<<endl;
  cout <<napolitana<<" de napolitana"<<endl;
  cout <<"El tipo de cocción de todas las pizzas es "<<tipodecocción<<endl; 
  
  cout <<pollo<<" de pollo"<<endl;
  cout <<carne<<" de carne"<<endl;
  cout <<jamonyqueso<<" de jamon y queso"<<endl;

  cout <<"Ordenó "<<cantpizzas;
  cout <<" pizzas"<<endl;
  cout <<"Ordenó "<<cantempanadas;
  cout <<" empanadas"<<endl;
  
  cout <<"El tipo de cocción de todas las empanadas es "<<tipodecocción2<<endl; 
  cout <<"el precio del pedido es "<<precio<<endl;
  cout <<"¡Muchas gracias por su pedido!";

}
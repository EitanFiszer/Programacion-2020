#include <iostream>
using namespace std;

//pedir tipo de la figura
char pedirChar(string MENSAJE){
  char valor;
  cout<<MENSAJE<<endl;
  cin>>valor;
return valor;
}

//pedir medidas del triángulo
float pedirT(string MENSAJE){
float valor;

cout<<MENSAJE<<endl;
cin>>valor;

return valor;
}

//pedir lado del cuadrado
float pedirQ(string MENSAJE){
float valor;

cout<<MENSAJE<<endl;
cin>>valor;

return valor;
}

//pedir radio del circulo
float pedirC(string MENSAJE){
float valor;

cout<<MENSAJE<<endl;
cin>>valor;

return valor;
}

//calcular area del triangulo
float calcularAreaT(float base, float altura){
float valor;

valor=base*altura/2;

return valor;
}

//calcular area del cuadrado
float calcularAreaQ(float lado){
float valor;

valor=lado*lado;

return valor;
}

//calcular area del circulo
float calcularAreaC(float radio, double PI){
float valor;

valor=radio*radio*PI;

return valor;
}

//calcular perimetro del triangulo
float calcularPerT(float lado1, float lado2, float lado3){
  float valor;

  valor=lado1+lado2+lado3;

  return valor;
}

//calcular perimetro del triangulo
float calcularPerQ(float lado){
  float valor;

  valor=lado*4;

  return valor;
}

//calcular perimetro del triangulo
float calcularPerC(float radio, double PI){
  float valor;

  valor=radio*2*PI;

  return valor;
}

//mostrar mensaje final
void mostrarResultado(string mensajeArea,string mensajePer,float area, float perimetro){
  cout<<mensajePer<<perimetro<<endl;
  cout<<mensajeArea<<area<<endl;
}

int main(){
  
//declaracion de variables
  char figura;

  float Lado1T;
  float Lado2T;
  float Lado3T;
  float AlturaT;
  float LadoQ;
  float radioC;

  float area;
  float perimetro;

  //declaración de PI
  const double PI=3.1415;
  
  //mensajes
  const string MENSAJE_FIG ="Ingrese la inicial de su figura. Cuadrado(Q), circulo(C) o triangulo(T).";
  const string MENSAJE_LADOT1 ="Ingrese la medida de la base en cm.";
  const string MENSAJE_LADOT2 ="Ingrese la medida de un lado en cm.";
  const string MENSAJE_LADOT3 ="Ingrese la medida del otro lado en cm.";
  const string MENSAJE_ALTURAT ="Ingrese la medida de la altura en cm.";
  const string MENSAJE_Q ="Ingrese la medida de un lado en cm.";
  const string MENSAJE_C ="Ingrese la medida del radio en cm.";
  const string MENSAJE_PER="El perimetro de la figura en cm es ";
  const string MENSAJE_AREA="El area de la figura en cm cuadrado es ";

//pedir el tipo de figura
  figura=pedirChar(MENSAJE_FIG);

//en caso de ser triangulo
if (figura == 'T'||figura == 't'){
  Lado1T=pedirT(MENSAJE_LADOT1);
  Lado2T=pedirT(MENSAJE_LADOT2);
  Lado3T=pedirT(MENSAJE_LADOT3);
  AlturaT=pedirT(MENSAJE_ALTURAT);

  area=calcularAreaT(Lado1T,AlturaT);
  perimetro=calcularPerT(Lado1T,Lado2T,Lado3T);
}

//en caso de ser cuadrado
else if(figura == 'Q'||figura == 'q'){
  LadoQ=pedirQ(MENSAJE_Q);

  area=calcularAreaQ(LadoQ);
  perimetro=calcularPerQ(LadoQ);
}

//en caso de ser circulo
else if(figura == 'C'||figura == 'c'){
  radioC=pedirC(MENSAJE_C);
  
  area=calcularAreaC(radioC,PI);
  perimetro=calcularPerC(radioC,PI);
}
//llamar funcion de mostrar los resultados
mostrarResultado(MENSAJE_AREA,MENSAJE_PER,area,perimetro);
}
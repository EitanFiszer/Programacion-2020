#include <iostream>
using namespace std;

float pedirFloat(string Mensaje){
float valor;

cout<<Mensaje<<endl;
cin>>valor;

return valor;
}

bool validarTriangulo(float lado1, float lado2, float lado3){
  bool valido;
  if ((lado1>(lado2+lado3)) || (lado2>(lado1+lado3)) || (lado3>(lado1+lado2))){
    valido=false;
  }else{
    valido=true;
  }
return valido;
}

char SacarTipoTriangulo(float lado1, float lado2, float lado3){
  char tipo;
  if((lado1==lado2)&&(lado2==lado3)){
  tipo='Q';
}else{
  if((lado1!=lado2)&&(lado2!=lado3)&&(lado1!=lado3)){
    tipo='E';
  }else{
    tipo='I';
  }
}

return tipo;
}

void mensajes(string mensaje){
  cout<<mensaje<<endl;
}

void mostrarMensaje(char tipo, string MENSAJEEQUILATERO, string MENSAJEISOSCELES, string MENSAJEESCALENO){
  if(tipo=='Q'){
    cout<<MENSAJEEQUILATERO<<endl;
  }else{
  if(tipo=='I'){
    cout<<MENSAJEISOSCELES<<endl;  
  }else{
    cout<<MENSAJEESCALENO<<endl;
  }
}
}

int main() {
  float lado1;
  float lado2;
  float lado3;
  char tipotriangulo;

  const string MENSAJELADO1="Hola, bienvenido. Ingrese la medida del primer lado de la percha.";
  const string MENSAJELADO2="Ingrese la medida del segundo lado.";
  const string MENSAJELADO3="Ingrese la medida del tercer lado.";
  const string MENSAJEERROR="Las medidas del triangulo no son validas.";
  const string MENSAJEEQUILATERO="La percha es equilatero.";
  const string MENSAJEISOSCELES="La percha es isosceles.";
  const string MENSAJEESCALENO="La percha es escaleno.";

lado1=pedirFloat(MENSAJELADO1);
lado2=pedirFloat(MENSAJELADO2);
lado3=pedirFloat(MENSAJELADO3);

if (validarTriangulo(lado1,lado2,lado3)){
  tipotriangulo=SacarTipoTriangulo(lado1,lado2,lado3);
  mostrarMensaje(tipotriangulo,MENSAJEEQUILATERO,MENSAJEISOSCELES,MENSAJEESCALENO);
}
else{
  mensajes(MENSAJEERROR);
}
}

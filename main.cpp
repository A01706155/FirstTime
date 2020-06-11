/*----------------------------------
*
* Laboratorio: POO y C++
* Fecha: 15-May-2020
* Autor: A01706155 Manolo Ramírez Pintor
*
*----------------------------------*/
#include <iostream>
#include <math.h>

using namespace std;

class triangulo {
private: //Atributos
float lado_ayb, lado_c;
public: //Métodos
void setLados(float, float);
float getPerimetro();
float getArea();
};

//Setters, para atributos
void triangulo::setLados(float ladoayb, float ladoc){
  lado_ayb = ladoayb;
  lado_c = ladoc;
}

float triangulo::getPerimetro(){
  if (lado_ayb > lado_c){
  }
  else{
  swap(lado_ayb,lado_c); 
  }
  float perimetro;
  perimetro = (lado_ayb*2)+lado_c;
  return perimetro;
}

float triangulo::getArea(){
  float a_cuadrada=pow(lado_ayb,2);
  float c_cuadrada=pow(lado_c,2);
  float semifinal=a_cuadrada-(c_cuadrada/4);
  float yafinal = sqrt(semifinal);
  return yafinal;
}

int main()
{
cout <<"¡Bienvenido a la calculadora de triángulos isósceles! :D\n"<<endl;

triangulo triangulo1;

triangulo1.setLados(5,2);
cout<<"El perimetro del triángulo es: "<<triangulo1.getPerimetro()<<endl;;
cout<<"El área del triángulo es: "<<triangulo1.getArea()<<endl;


return 0;

}
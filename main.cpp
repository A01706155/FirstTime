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
public:
double lado_a,lado_b,lado_c,a_cuadrada,c_cuadrada,semifinal;

void medidas() {
cout << "Ingresa la longitud de ambos lados (a,b): ";
cin >> lado_a;
lado_b = lado_a;
cout << "Ingresa la longitud de la base (c): ";
cin >> lado_c;
cout <<"\n";
}

void verificador() {
if (lado_a > lado_c)
cout <<"";
else 
cout << "¡¡Advertencia!!. El triángulo especificado no existe. \nEl cálculo dará errores. F.\n\n"; 
}

void perimetro() {
cout <<"El perímetro del triángulo es de "<<lado_a+lado_b+lado_c<<" unidades \n";
}

void area() {
a_cuadrada=pow(lado_a,2);
c_cuadrada=pow(lado_c,2);
semifinal=a_cuadrada-(c_cuadrada/4);
cout <<"El área del triángulo es de "<< sqrt(semifinal) <<" unidades cuadradas";
}

};

int main()
{
triangulo test;
test.medidas();
test.verificador();
test.perimetro();
test.area();
return 0;

}
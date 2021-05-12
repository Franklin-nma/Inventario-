//inventario//
//By:Jessica Porras y Franklin Navas11-4//
#include <iostream>
using namespace std;
int main() {
  char texto[40];
  float horas1, horas2,horas3,horas4,tipo1,tipo2, tipo3,tipo4, nombre1, nombre2,nombre3, nombre4,consumo1,consumo2,consumo3, consumo4,resultado1, resultado2, resultado3, resultado4,mensual1, mensual2, mensual3,mensual4;
  string type="luces, electrodomesticos,camaras";
  string name= "cmara exterior, luz exterior, luz interior";
 cout<<"Ingrese la cantidad horas diarias que el dispositivo 1 está encendido: "<<endl;
 cin>>horas1;
 cout<<"Ingrese la cantidad de watts que consume el dispositivo 1: "<<endl;
 cin>>consumo1;
 cout<<"Ingrese el tipo de dispositivo 1:"<<endl;
 scanf("%s", texto);
 cout << "Ingrese el nombre del dispositivo 1: "<<endl;
 scanf("%s", texto);
 cout<<"Ingrese la cantidad horas diarias que el dispositivo 2 está encendido:"<<endl;
 cin>>horas2;
 cout<<"Ingrese la cantidad de watts que consume el dispositivo 2:"<<endl;
 cin>>consumo2;
 cout<<"Ingrese el tipo de dispositivo 2:"<<endl;
 scanf("%s", texto);
 cout << "ingrese el nombre del dispositivo 2:"<<endl;
scanf("%s", texto);
 cout<<"Ingrese la cantidad horas diarias que el dispositivo 3 está encendido;"<<endl;
 cin>>horas3;
 cout<<"Ingrese la cantidad de watts que consume el dispositivo 3:"<<endl;
 cin>>consumo3;
 cout<<"Ingrese el tipo de dispositivo 3:"<<endl;
 scanf("%s", texto);
 cout << "ingrese el nombre del dispositivo "<<endl;
scanf("%s", texto);
 cout<<"Ingrese la cantidad horas diarias que el dispositivo 4 está encendido"<<endl;
 cin>>horas4;
 cout<<"Ingrese la cantidad de watts que consume el dispositivo 4"<<endl;
 cin>>consumo4;
 cout<<"Ingrese el tipo de dispositivo 4:"<<endl;
scanf("%s", texto);
 cout << "ingrese el nombre del dispositivo 4:"<<endl;
 scanf("%s", texto);
 resultado1=consumo1*horas1;
 resultado2=consumo2*horas2;
 resultado3=consumo3*horas3;
 resultado4=consumo4*horas4;
 cout<<"El consumo diario del dipsoitivo 1 es :"<<resultado1<<"watts hora"<<endl;
 cout<<"El consumo diario del dipsoitivo 2 es :"<<resultado2<<"watts hora"<<endl;
 cout<<"El consumo diario del dipsoitivo 3 es :"<<resultado3<<"watts hora"<<endl;
 cout<<"El consumo diario del dipsoitivo 4 es :"<<resultado4<<"watts hora"<<endl;
 mensual1= resultado1*30;
 mensual2=resultado2*30;
 mensual3=resultado3*30;
 mensual4=resultado4*30;
 cout<<"El consumo mensusal del dipsoitivo 1 es :"<<mensual1<<"watts hora"<<endl;
 cout<<"El consumo mensusal del dipsoitivo 2 es :"<<mensual2<<"watts hora"<<endl;
 cout<<"El consumo mensusal del dipsoitivo 4 es :"<<mensual3<<"watts hora"<<endl;
 cout<<"El consumo mensusal del dipsoitivo 4 es :"<<mensual4<<"watts hora"<<endl;
  return 0;
}
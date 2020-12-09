/*
	Name: Punto 9 Tipo 1 ALG2 PRÁCTICA
	Copyright: POLI JIC
	Author: POR: Santiago Olmedo, David Londoño, Tomás Pineda, Carlos González.
	Description: 
	Hacer un programa que genera una pila con números aleatorios de 100 a 300 y los imprima en orden
	inverso de generación. Haz una clase de prueba que lea línea de un fichero y las imprima en orden
	inverso en pantalla.
*/


#include <iostream>
#include "MetodosT1P9.h"
#include <conio.h>
#include<stdlib.h>
#include<time.h>
#include <fstream>
using namespace std;
int main(int argc, char** argv) {
	int lim,lim2,n,i;
	srand(time(NULL));
	cout<<"\n\n					PUNTO 9 - TIPO 1"<<endl;
	cout<<"\n\t\t* * * * * * * INSERTOR DE PILAS DE NUMEROS ALEATORIOS (RANGO DE 100 - 300) * * * * * * *"<<endl<<endl;
	do
	{
		cout<<"\t\tDigite el limite de la Pila mayor a cero: ";
		cin>>lim;
	}while(lim < 1);
	Pila P(lim);
	system("cls");
	cout<<"\n\n";
	cout<<"INSERCION DE DATOS ALEATORIOS: ";
	cout<<"\n\n\n";
	for(i=0;i<lim;i++)
	{
		n=100+rand()%(301-100);
		cout<<"\t\tEntero #"<<i+1<<" con el dato "<<n<<" asignado satisfactoriamente."<<endl;
		P.Apilar(n);
	}
	cout<<endl;
	cout<<"\n\n\t\t*************** PILA ***************\n"<<endl;
	P.MostrarPila();
	cout<<"\n\n";
	cout<<"\t\t";
	system("pause");
	cout<<"\n\n";
	cout<<"\t\t************ PILA INVERTIDA ************\n"<<endl;
	P.InvertirPila();
	P.MostrarPila();
	cout<<endl;
	cout<<endl;	
	P.~Pila();
	cout<<"\t\tDestruyendo Pila...\n"<<endl;
	cout<<"\t\t*****************************************";
	cout<<"\n\t\t";
	system("pause");
	system("cls");
	cout<<"\n\n";
	cout<<"\t\t********************************************************"<<endl<<endl;
	do
	{
		cout<<"\t\tDigite el limite de la Pila mayor a cero para insertar desde fichero: ";
		cin>>lim2;
	}while(lim2 < 1);
	
	Pila P2(lim2);
	P2.LlenarDesdeFichero(lim2);
	cout<<"\n\n";
	cout<<"\t\t************ PILA INVERTIDA ************\n"<<endl;
	P2.InvertirPila();
	P2.MostrarPila();
	cout<<"\n\n";
	P2.~Pila();
	cout<<"\t\tDestruyendo Pila...\n"<<endl;
	cout<<"\t\t********************************************************"<<endl<<endl;

	return 0;
}

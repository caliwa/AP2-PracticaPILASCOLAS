#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <fstream>
#include "ClaseCola.h"

using namespace std;

Cola::Cola(int n)
{
	Limite = n-1;
	Tope = -1;
	vec = new int[n];
}

bool Cola::ColaLlena()
{
	if(Tope>=Limite)
	{
		return (true);
	}
	else
	{
		return (false);
	}
}


void Cola::Encolar(int d)
{
	if(ColaLlena()==false)
	{
		Tope++;
		vec[Tope] = d;
	
	}
	else
	{
		cout<<"La cola esta llena";
	}
}

int Cola::MostrarCola(int i)
{
	
	if (i==0)
	{
		cout<<"Lista vacia";
	}
	else{
		cout<<"|"<<vec[i-1]<<"|"<<endl;
		return MostrarCola(i-1);
	} 
}

void Cola::LlenarDesdeLista(){
	int i;
	int dato;
	ifstream archivo;
	archivo.open("lista.txt");
	if (archivo.is_open()){
		while(!archivo.eof()){
			archivo>>dato;
			Cola::Encolar(dato);
		}	
		archivo.close();
	}else{
		cout<<"\tArchivo no encontrado"<<endl;
	}
}

int LeerLista()
{
	int Cont=0;
	int dato;
	ifstream archivo;
	archivo.open("lista.txt");
	if (archivo.is_open()){
		while(!archivo.eof()){
			archivo>>dato;
			Cont++;
		}	
		archivo.close();
	}
	else{
		cout<<"\tArchivo no encontrado"<<endl;
	}
	return Cont;
}

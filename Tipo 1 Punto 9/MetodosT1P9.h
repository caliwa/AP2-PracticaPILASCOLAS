#include <iostream>
#include <conio.h>
#include "ClasePilaT1P9.h"
#include <fstream>

using namespace std;

Pila::Pila(int n)
{
	Limite = n-1;
	Tope = -1;
	vec = new int[n];
}

Pila::~Pila(){
}

void Pila::Apilar(int d)
{
	bool b = PilaLlena();
	if(b==false)
	{
		Tope++;
		vec[Tope] = d;
	
	}
	else
	{
		cout<<"La pila esta llena";
	}
}


int Pila::desapilar()
{
	int r = vec[Tope];
	Tope--;
	return (r);
}


bool Pila::PilaLlena()
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


bool Pila::PilaVacia()
{
	bool b = false;
	if(Tope==-1)
	{
		b = true;
	}
	return (b);
}
	
void Pila::MostrarPila()
{
	int r;
	Pila Aux(Limite+1);
	while(PilaVacia()==false)
	{
		r = desapilar();
		cout<<"\t\t\t\t|"<<r<<"|"<<endl;
		Aux.Apilar(r);
		
	}
	LlenarPila(Aux);
}
	
	
void Pila::LlenarPila(Pila A)
{
	while(A.PilaVacia() == false)
	{
		Apilar(A.desapilar());
	}
}

int Pila::GetLimite()
{
	return Limite;
}

void Pila::SetLimite(int l)
{
	Limite = l;
}

int Pila::GetTope()
{
	return Tope;
}

void Pila::SetTope(int t)
{
	Tope = t;
}

int Pila::GetVector()
{
	return *vec;
}

void Pila::SetVector(int v)
{
	*vec=v;
}

void Pila::InvertirPila()
{
	int r;
	Pila Aux1(Limite+1),Aux2(Limite+1);
	while(PilaVacia()==false)
	{
		r = desapilar();
		Aux1.Apilar(r);
	}
	while(Aux1.PilaVacia()==false)
	{
		r = Aux1.desapilar();
		Aux2.Apilar(r);
	}
	LlenarPila(Aux2);
}

void Pila::LlenarDesdeFichero(int lim)
{
	ifstream archivo;	
	int Cont2, Cont3, Dato;
	Cont2 = 0;
	Cont3 = 0;

	archivo.open("Fichero.txt");
	if(archivo.is_open()){
		while(!archivo.eof()){
			archivo>>Dato;
			if(PilaLlena() == false){
				Apilar(Dato);
				Cont2++;
			}
			Cont3++;
		}
		archivo.close();
		cout<<"\n\t\t El fichero contiene "<<Cont3<<" datos, el limite de ingreso ha sido de "<<lim<<". Se han ingresado "<<Cont2<<" datos a la pila."<<endl<<endl;
	}
	else
	{
		cout<<"\tArchivo no encontrado"<<endl;		
	}
	
}





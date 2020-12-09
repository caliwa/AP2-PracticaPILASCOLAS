#include <iostream>
#include <conio.h>
#include "ClaseColaT2P12.h"

using namespace std;

Cola::Cola(int n)
{
	Limite = n-1;
	Tope = -1;
	vec = new int[n];
}

Cola::~Cola(){
}


void Cola::Encolar(int d)
{
	bool b = ColaLlena();
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


int Cola::Desencolar()
{
	int r = vec[Tope];
	Tope--;
	return (r);
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



bool Cola::ColaVacia()
{
	bool b = false;
	
	if(Tope == -1)
	{
		b = true; 
	} 
	return (b);

}
	
void Cola::MostrarCola()
{
	int r;
	Cola Aux(Limite+1);
	while(ColaVacia()==false)
	{
		r = Desencolar();
		cout<<"\t\t\t\t\t|"<<r<<"|"<<endl;
		Aux.Encolar(r);
		
	}
	LlenarCola(Aux);
}


	
void Cola::LlenarCola(Cola A)
{
	while(A.ColaVacia() == false)
	{
		Encolar(A.Desencolar());
	}
}

int Cola::GetLimite()
{
	return Limite;
}

void Cola::SetLimite(int l)
{
	Limite = l;
}

int Cola::GetTope()
{
	return Tope;
}

void Cola::SetTope(int t)
{
	Tope = t;
}

int Cola::GetVector()
{
	return *vec;
}

void Cola::SetVector(int v)
{
	*vec=v;
}


void Cola::InvertirCola()
{
	int r;
	Cola Aux1(Limite+1),Aux2(Limite+1);
	while(ColaVacia()==false)
	{
		r = Desencolar();
		Aux1.Encolar(r);
	}
	while(Aux1.ColaVacia()==false)
	{
		r = Aux1.Desencolar();
		Aux2.Encolar(r);
	}
	LlenarCola(Aux2);
}

void Cola::EncolarUltDigito(Cola A, Cola B)
{	
	LlenarCola(B);
	LlenarCola(A);
}

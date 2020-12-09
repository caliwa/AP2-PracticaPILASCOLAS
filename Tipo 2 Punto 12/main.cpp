	/*
	Name: Punto 12 Tipo 2 ALG2 PRÁCTICA
	Copyright: POLI JIC
	Author: POR: Santiago Olmedo, David Londoño, Tomás Pineda, Carlos González.
	Description: 
	Escribir un método que acepte 2 colas con parámetros, las cuales contienen números enteros.
	Crear una tercera cola con los números de las colas terminadas en un digito leído (ingresado
	por el usuario)
*/

#include <iostream>
#include "MetodosColaT2P12.h"
#include <conio.h>
using namespace std;
int main(int argc, char** argv) {
	int lim, lim2, n, i, Num, Cont1, Cont2;

	cout<<"\n\n\t\t\t\t       PUNTO 12 - TIPO 2"<<endl;
	cout<<"\n\t\t\t************** INSERTOR DE COLAS **************\n"<<endl;
	cout<<"\t\tIngrese solo un numero del 0 al 9 para proceder..."<<endl;

	do{
		cout<<"\t\tIngrese: ";
		cin>>Num;
	}while(Num < 0 || Num > 9);
	cout<<"\n";
	cout<<"\t\tCon el numero anterior compararemos cada casilla de las proximas colas"<<endl;
	cout<<"\t\t... para saber si es igual al ultimo digito, para agrupar en otra cola."<<endl;
	do{
		cout<<"\n\t\tDigite el limite de ingreso para la cola #1 (mayor a cero): ";
		cin>>lim;
	}while(lim < 1);
	Cola C1(lim);
	Cola Aux1(lim);
	do{
		cout<<"\n\t\tDigite el limite de ingreso para la cola #2 (mayor a cero): ";
		cin>>lim2;
	}while(lim2 < 1);
	Cola C2(lim2);
	Cola Aux2(lim2);
	cout<<endl;
	Cont1 = 0;
	for(i = 0 ; i < lim ; i++)
	{
		do{
			cout<<"\t\tPara la Cola 1, digite el dato entero #"<<i+1<<": ";
			cin>>n;
		}while(n < 0);
		Aux1.Encolar(n);
		if(n%10 == Num){
			Cont1++;
			C1.Encolar(n);
		}
	}
	cout<<endl;
	Cont2 = 0;
	for(i = 0 ; i < lim2 ; i++)
	{
		do{
			cout<<"\t\tPara la Cola 2, digite el dato entero #"<<i+1<<": ";
			cin>>n;
		}while(n < 0);
		Aux2.Encolar(n);
		if(n%10 == Num){
			Cont2++;
			C2.Encolar(n);
		}
	}
	cout<<"\n";
	cout<<"\t\t***********************COLA 1*********************\n"<<endl;
	Aux1.MostrarCola();
	cout<<endl;
	cout<<"\t\t***********************COLA 2*********************\n"<<endl;
	Aux2.MostrarCola();
	cout<<endl;
	if(Cont1+Cont2 == 0)
	{
		cout<<"\t\t**************************************************"<<endl;
		cout<<"\n\t\t\tNo hubieron datos en las Colas en comun"<<endl;
		cout<<"\t\t\t(respecto al ultimo digito de los datos)"<<endl;
		cout<<"\t\t\t\tcon este digito: "<<Num<<endl;
		cout<<"\n\t\tDestruyendo Cola 1...\n";
		C1.~Cola();
		cout<<"\t\tDestruyendo Cola 2...\n";
		C2.~Cola();
		cout<<"\n\n";
		cout<<"\t\t**************************************************"<<endl;
	}
	else
	{
		cout<<"\t\t******PREPARANDO METODO PARA AMBAS COLAS...*******\n\n";
		cout<<"\t\t\t";
		system("pause");
		cout<<"\n\t\t***********************COLA 3*********************\n"<<endl;
		Cola Res(Cont1 + Cont2);	
		Res.EncolarUltDigito(C1, C2);
		Res.InvertirCola();
		Res.MostrarCola();
		cout<<"\n\t\tDestruyendo Cola 1...\n";
		C1.~Cola();
		cout<<"\t\tDestruyendo Cola 2...\n";
		C2.~Cola();
		cout<<"\t\tDestruyendo Cola 3...\n\n";
		Res.~Cola();
		cout<<"\t\t**************************************************"<<endl;
	}
	return 0;
}
